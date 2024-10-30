#include <iostream>


using namespace std;

int main(){
    int n;
    cout << "podaj ilosc wyrazow ciagu: ";
    cin >> n;
    int fib[n];

    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++){
        cout << i +1 << "wyraz ciagu fibonacciego wynosi: " << fib[i] << endl;
    }
}