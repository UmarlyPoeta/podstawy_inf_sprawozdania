#include <iostream>

using namespace std;

int LiczbyPitagorejskie(int a, int b, int c){
    return (a * a + b * b == c * c);
}

int main(){

    cout << LiczbyPitagorejskie(3,4,5) << endl;
    cout << LiczbyPitagorejskie(3,7,2) << endl;
    return 0;
}