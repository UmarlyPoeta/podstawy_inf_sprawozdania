#include "funkcje.h"
#include <iostream>

using namespace std;

int main(void){
    int program;
    cout << "podaj program od <1, 5> : ";
    cin >> program;
    switch (program)
    {
    case 1:
        zad01();
        break;
    case 2:
        zad02();
        break;
    case 3:
        zad03();
        break;
    case 4:
        zad04();
        break;
    case 5:
        zad05();
        break;
    default:
        cout << "nieprawidlowy numer" << endl;
        return 1;
    }
    return 0;
}