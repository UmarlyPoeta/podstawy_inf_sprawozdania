#include <iostream>

using namespace std;

int main(void){
    int n;
    cout << "podaj ilosc liczb: ";
    cin >> n;

    int tab[n];

    for (int i = 0; i < n; i++){
        cout << "podaj " << i +1 << " liczbe: ";
        cin >> tab[i]; 
    }

    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += tab[i];
    }
    int s = sum / n;
    cout << "srednia wynosi " << s << endl;

    for (int i = 0; i < s; i++){
        cout << "0";
    }
    cout << endl;
    return 0;

}