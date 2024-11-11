#include <iostream>


using namespace std;

int main(){
    int v, e;

    cout << "podaj liczbe wierzcholkow: ";
    cin >> v;

    int **sasiedzi = new int *[v];

    for (int i = 0; i < v; i++){
        sasiedzi[i] = new int[v];
    }

    for (int i = 0; i < v; i++){
        for (int j = 0; j < v; j++){
            sasiedzi[i][j] = 0;
        }
    }

    cout << "podaj liczbe krawedzi: ";
    cin >> e;

    for (int i = 0; i < e; i++){
        int a, b;
        cout << "podaj " << i + 1 << " pare krawedzi np. 1 3 :";
        cin >> a >> b;
        sasiedzi[a][b] = 1;
    }

    for (int i = 0; i < v; i++){
        for (int j = 0; j < v; j++){
            cout << sasiedzi[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < v; i++){
        delete []sasiedzi[i];
    }
    delete []sasiedzi;
    return 0;
}