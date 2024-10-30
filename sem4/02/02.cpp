#include <iostream>
#include "func.hpp"

using namespace std;

bool p = true;
bool q = true;
bool r = false;

int main(){

    bool a = koniunkcja(p,q);
    bool b = alternatywa(p,q);
    bool c = koniunkcja(negacja(p), alternatywa(p,q));
    bool d = implikacja(koniunkcja(p,r), q);
    bool e = negacja(rownowaznosc(p, alternatywa(q,r)));
    bool f = rownowaznosc(alternatywa(implikacja(p,r),negacja(q)),implikacja(p, koniunkcja(r, negacja(q))));
    bool g = implikacja(alternatywa(alternatywa(negacja(r), q), negacja(koniunkcja(q,r))), negacja(implikacja(q,p)));

    cout << "zdanie a wynosi: " << a << endl;

    cout << "zdanie b wynosi: " << b << endl;

    cout << "zdanie c wynosi: " << c << endl;

    cout << "zdanie d wynosi: " << d << endl;

    cout << "zdanie e wynosi: " << e << endl;

    cout << "zdanie f wynosi: " << f << endl;

    cout << "zdanie g wynosi: " << g << endl;

    cout << "podaj p (1/0): ";
    cin >> p;

    cout << "podaj q(1/0): ";
    cin>> q;


    cout << "podaj r(1/0): ";
    cin>> r;


    a = koniunkcja(p,q);
    b = alternatywa(p,q);
    c = koniunkcja(negacja(p), alternatywa(p,q));
    d = implikacja(koniunkcja(p,r), q);
    e = negacja(rownowaznosc(p, alternatywa(q,r)));
    f = rownowaznosc(alternatywa(implikacja(p,r),negacja(q)),implikacja(p, koniunkcja(r, negacja(q))));
    g = implikacja(alternatywa(alternatywa(negacja(r), q), negacja(koniunkcja(q,r))), negacja(implikacja(q,p)));

    cout << "zdanie a wynosi: " << a << endl;

    cout << "zdanie b wynosi: " << b << endl;

    cout << "zdanie c wynosi: " << c << endl;

    cout << "zdanie d wynosi: " << d << endl;

    cout << "zdanie e wynosi: " << e << endl;

    cout << "zdanie f wynosi: " << f << endl;

    cout << "zdanie g wynosi: " << g << endl;


    return 0;
}