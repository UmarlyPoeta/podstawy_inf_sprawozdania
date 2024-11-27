#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <fstream>
#include <thread>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

void heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void measureSortingTime(void (*sortFunction)(std::vector<int>&), std::vector<int> arr, const std::string& sortName, std::fstream& file) {
    auto start = std::chrono::high_resolution_clock::now();
    sortFunction(arr);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    file << sortName << " took " << elapsed.count() << " seconds.\n";
}

void printProgressBar(int progress, int total) {
    int barWidth = 70;
    float progressRatio = static_cast<float>(progress) / total;
    int pos = barWidth * progressRatio;

    std::cout << "[";
    for (int i = 0; i < barWidth; ++i) {
        if (i < pos) std::cout << "=";
        else if (i == pos) std::cout << ">";
        else std::cout << " ";
    }
    std::cout << "] " << int(progressRatio * 100.0) << " %\r";
    std::cout.flush();
}

int main() {
    srand(time(NULL));

    std::fstream file;
    file.open("results.txt", std::ios::out);
    std::vector<int> sizes = {1000, 10000, 30000, 60000, 100000};

    int totalTasks = sizes.size() * 4; // 4 sorting algorithms
    int currentTask = 0;

    for (int size : sizes) {
        std::vector<int> arr(size);
        for (int i = 0; i < size; i++) {
            arr[i] = rand() % 100000 + 1;
        }

        file << "\nSorting array of size " << size << ":\n";

        measureSortingTime(bubbleSort, arr, "Bubble Sort", file);
        currentTask++;
        printProgressBar(currentTask, totalTasks);

        measureSortingTime(selectionSort, arr, "Selection Sort", file);
        currentTask++;
        printProgressBar(currentTask, totalTasks);

        auto heapArr = arr;
        auto start = std::chrono::high_resolution_clock::now();
        heapSort(heapArr);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = end - start;
        file << "Heap Sort took " << elapsed.count() << " seconds.\n";
        currentTask++;
        printProgressBar(currentTask, totalTasks);

        auto quickArr = arr;
        start = std::chrono::high_resolution_clock::now();
        quickSort(quickArr, 0, quickArr.size() - 1);
        end = std::chrono::high_resolution_clock::now();
        elapsed = end - start;
        file << "Quick Sort took " << elapsed.count() << " seconds.\n";
        currentTask++;
        printProgressBar(currentTask, totalTasks);
    }

    std::cout << std::endl;
    return 0;
}
