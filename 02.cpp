#include <iostream>

using namespace std;

int main(void){
    int l1, l2;
    int sum = 0;
    cout << "podaj dwie liczby: ";
    cin >> l1 >> l2;
    if (l1 > l2){
        int tmp = l1;
        l1 = l2;
        l2 = tmp;
    }
    l1++;
    for (; l1 < l2; l1++){
        if (l1 % 2 == 0){
            sum += l1;
        }
        cout << l1 << endl;
    }

    cout << "suma wynosi " << sum << endl;

    return 0;
}