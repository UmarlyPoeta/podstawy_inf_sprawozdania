#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>


using namespace std;


int main(){
    srand(time(NULL));
    cout << "Witaj w totolotku!" << endl;
    for (int i = 0; i < 6; i++){
        cout << "losuje liczbe nr " << i +1 << " : ";
        usleep(1000000);
        cout << "Wylosowala sie liczba " << (rand() % 49 + 1) << endl;
    }

    return 0;
}