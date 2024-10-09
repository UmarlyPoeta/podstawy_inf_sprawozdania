#include <iostream>

using namespace std;


int main(void) {
    int liczby[5];

    for (int i = 0; i < 5; i++){
        cout << "podaj " << i + 1 << " liczbe: ";
        cin >> liczby[i]; 
    }
    int min = liczby[0];
    int max = liczby[0];
    for (int i = 1; i < 5; i++){
        if (liczby[i] > max){
            max = liczby[i];
        }
        else if (liczby[i] < min){
            min = liczby[i];
        }
    }

    cout << "min to " << min << " max to " << max << " a ich roznica to " << (max - min) << endl;
    return 0;
}