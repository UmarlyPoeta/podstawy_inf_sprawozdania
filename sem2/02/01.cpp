#include <iostream>

using namespace std;

void zad01(){
    int rok;
    cout << "podaj rok: ";
    cin >> rok;
    if ((rok % 4 == 0) && ((rok % 100 != 0) || (rok % 400 == 0))){
        cout << "jest przestepny" << endl;
    }
    else{
        cout << "nie jest przestepny" << endl;
    }
}