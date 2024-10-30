#include <iostream>
#include <math.h>


using namespace std;

int main(void){
    double pa;

    cout << "Podaj wartosc Pa: ";
    cin >> pa;
    int wybor;
    cout << "Podaj na co chcesz przeliczyc Pa" << endl;
    cout << "1. bar" << endl;
    cout << "2. tor" << endl;
    cout << "3. psi" << endl;
    cin >> wybor;

    switch (wybor){
        case 1:
            cout << "twoje Pa w jednostkach bar wynosi " << pa * pow(10, -5) << endl;
            break;
        case 2:
            cout << "Twoje Pa w jednostkach tor wynosi " << pa * 0.0075 << endl;
            break;
        case 3:
            cout << "Towje Pa w jednostkach psi wynosi " << pa * 145.038 * pow(10, -6) << endl;
            break;
        default:
            cout << "Nieprawidlowa opcja" << endl;
            break;
    }
    return 0;
}