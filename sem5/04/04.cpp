#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(){
    fstream odczyt;
    odczyt.open("dane.txt", ios::in);
    string pierwsze_dane;


    getline(odczyt, pierwsze_dane);

    string v_raw, e_raw;

    bool space_happened = false;

    for (int i = 0; i < pierwsze_dane.length(); i++){
        if (pierwsze_dane[i] == ' '){
            space_happened = true;
        }

        if (!space_happened && pierwsze_dane[i] != ' '){
            v_raw += pierwsze_dane[i];
        }
        else{
            e_raw += pierwsze_dane[i];
        }
    }
    int v_count, e_count;

    v_count = stoi(v_raw);
    e_count = stoi(e_raw);

    int **sasiedzi = new int *[v_count];

    for (int i = 0; i < v_count; i++){
        sasiedzi[i] = new int[v_count];
    }

    for (int i = 0; i < v_count; i++){
        for (int j = 0; j < v_count; j++){
            sasiedzi[i][j] = 0;
        }
    }
    string line;
    string e1,e2;
    int ie1, ie2;
    space_happened = false;
    while (getline(odczyt, line)){
        e1 = "";
        e2 = "";
        space_happened = false;
        for (int i = 0; i < line.length(); i++){
            if (line[i] == ' '){
                space_happened = true;
            }

            if (!space_happened && line[i] != ' '){
                e1 += line[i];
            }
            else if (space_happened && line[i] != ' '){
                e2 += line[i];
            }
        }
        ie1 = stoi(e1);
        ie2 = stoi(e2);
        sasiedzi[ie1][ie2] = 1;
    }

    for (int i = 0; i < v_count; i++){
        for (int j = 0; j < v_count; j++){
            cout << sasiedzi[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < v_count; i++){
        delete []sasiedzi[i];
    }
    delete []sasiedzi;
    return 0;
}