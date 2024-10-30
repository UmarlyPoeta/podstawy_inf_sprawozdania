#include <iostream>

using namespace std;

bool koniunkcja(bool p1, bool p2){
    return p1 && p2;
}

bool alternatywa(bool p1, bool p2){
    return p1 || p2;
}

bool negacja(bool p){
    return !p;
}

bool rownowaznosc(bool p1, bool p2){
    return p1 == p2;
}

bool implikacja(bool p1, bool p2){
    if (!p1 && p2){
        return true;
    }
    return p1 == p2;
}

int main(){
    bool p, q;

    cout << "podaj wartosc logiczna p (1/0):";
    cin >> p;

    cout << "podaj wartosc logiczna q (1/0):";
    cin >> q;

    cout << "koniunkcja wynosi: " << koniunkcja(p,q) << endl;
    cout << "alternatywa wynosi: " << alternatywa(p,q) << endl;
    cout << "negacja p wynosi: " << negacja(p) << endl;
    cout << "negacja q wynosi: " << negacja(q) << endl;
    cout << "implikacja wynosi: " << implikacja(p,q) << endl;
    cout << "rownowaznosc wynosi: " << rownowaznosc(p,q) << endl;
    

    return 0;
}