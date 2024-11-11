#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, m;
    fstream zapis;

    zapis.open("tablica.txt", ios::out);

    cout << "podaj rozmiar wierszy: " << endl;
    cin >> n;

    cout << "podaj rozmiar kolumn: " << endl;
    cin >> m;

    int **tab;

    tab = new int *[n];

    for (int i = 0; i < n; i++){
        tab[i] = new int[m];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            tab[i][j] = (i + 1) * (j + 1);
        }
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            zapis << tab[i][j] << "  ";
        }
        zapis << endl;
    }

    for (int i = 0; i < n; i++){
        delete []tab[i];
    }

    delete []tab;

    zapis.close();
    return 0;
}