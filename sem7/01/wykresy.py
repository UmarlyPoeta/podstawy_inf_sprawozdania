import matplotlib
matplotlib.use("Agg")

import matplotlib.pyplot as plt
import re

file_path = "results.txt"  
with open(file_path, "r") as file:
    data = file.readlines()

sizes = []
bubble_sort_times = []
selection_sort_times = []
heap_sort_times = []
quick_sort_times = []

for line in data:
    if "Sorting array of size" in line:
        size = int(re.search(r'\d+', line).group())
        sizes.append(size)
    elif "Bubble Sort" in line:
        bubble_sort_times.append(float(re.search(r'\d+\.\d+', line).group()))
    elif "Selection Sort" in line:
        selection_sort_times.append(float(re.search(r'\d+\.\d+', line).group()))
    elif "Heap Sort" in line:
        heap_sort_times.append(float(re.search(r'\d+\.\d+', line).group()))
    elif "Quick Sort" in line:
        quick_sort_times.append(float(re.search(r'\d+\.\d+', line).group()))
plt.figure(figsize=(10, 6))
plt.plot(sizes, bubble_sort_times, label="Bubble Sort", marker='o')
plt.plot(sizes, selection_sort_times, label="Selection Sort", marker='o')
plt.plot(sizes, heap_sort_times, label="Heap Sort", marker='o')
plt.plot(sizes, quick_sort_times, label="Quick Sort", marker='o')

plt.title("Czas sortowania dla różnych algorytmów")
plt.xlabel("Rozmiar tablicy")
plt.ylabel("Czas sortowania (sekundy)")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.title("Wykres na podstawy infy")

plt.savefig("wykres.png")



