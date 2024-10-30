#include <iostream>
#include "func.hpp"


using namespace std;

bool p;
bool q;
bool r;



int main(){
    
    cout << "podaj p (1/0): ";
    cin >> p;

    cout << "podaj q(1/0): ";
    cin>> q;


    cout << "podaj r(1/0): ";
    cin>> r;

    bool z1 = implikacja(implikacja(p || q || r, !p), q || r) && !p;
    bool z14 = implikacja(p, !p) || q;
    bool z27 = implikacja(implikacja((implikacja(implikacja(implikacja(p,q),q), r),implikacja(r, p)), q), p);

    cout << "zdanie logiczne nr 1 wynosi: " << z1 << endl;
    
    cout << "zdanie logiczne nr 14 wynosi: " << z14 << endl;
    
    cout << "zdanie logiczne nr 27 wynosi: " << z27 << endl;
    

    return 0;
}