#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream odczyt;
    string h;
    string hs;

    odczyt.open("haslo.txt", ios::in);

    if (!odczyt.good()){
        cout << "nie ma pliku z haslami" << endl;
        return 1;
    }

    cout << "podaj haslo: ";
    cin >> h;

    odczyt >> hs;

    if (h == hs){
        fstream dziennik;
        dziennik.open("dziennik_ocen.txt", ios::in);
        string linia;

        while (getline(dziennik, linia)){
            cout << linia << endl;
        }
        dziennik.close();
    }

    odczyt.close();
    return 0;
}