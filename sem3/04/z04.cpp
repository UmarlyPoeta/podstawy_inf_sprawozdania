#include <iostream>

using namespace std;

double wartosc_wyrazu_ciagu(double w_wyraz, double r){
    return w_wyraz + r;
}

int main(){
    double p, r;
    cout << "podaj pierwsza wartosc ciagu: ";
    cin >> p;

    cout << "podaj roznice ciagu: ";
    cin >> r;

    double ciag[100][2];
    ciag[0][0] = 1;
    ciag[0][1] = p;
    for (int i = 1; i < 100; i++){
        ciag[i][1] = wartosc_wyrazu_ciagu(ciag[i - 1][1], r);
        ciag[i][0] = i + 1;
    }

    for (int i = 0; i < 100; i++){
        cout << ciag[i][0] << "  " << ciag[i][1] << endl;
    }

    return 0;
}