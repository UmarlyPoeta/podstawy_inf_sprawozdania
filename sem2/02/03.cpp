#include <iostream>

using namespace std;

void zad03(){
    int dt;

    cout << "podaj numer dnia tygodnia <1, 7> : ";
    cin >> dt;

    if ((dt < 1) || (dt > 7)){
        cout << "nieprawidlowy numer" << endl;
        exit(1);
    }

    string dni_t[7] = {"poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela"};

    cout << "podany numer to " << dni_t[dt - 1] << endl;

}