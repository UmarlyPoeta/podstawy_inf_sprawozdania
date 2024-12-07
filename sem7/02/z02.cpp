#include <iostream>


using namespace std;

int main()
{
    int choice;
    int amount;
    cout <<"Wybierz produkt" << endl;
    cout <<"1. Woda (2 zl)"<<endl;
    cout <<"2. Cola (3 zl)"<<endl;
    cout <<"3. Sok (4 zl)"<<endl;
    cout << "\n";
    cin >> choice;

    cout << "Podaj wrzucona kwote: ";
    cin >> amount;
    switch (choice)
    {
        case 1:
            if (amount - 2 >= 0)
            {
                cout << "Oto pana reszta: " << amount - 2 << endl;
            }
            else
            {
                cout << "za malo pieniedzy" << endl;
            }
            break;

        case 2:
            if (amount - 3 >= 0)
            {
                cout << "Oto pana reszta: " << amount - 3 << endl;
            }
            else
            {
                cout << "za malo pieniedzy" << endl;
            }
            break;

        case 3:
            if (amount - 4 >= 0)
            {
                cout << "Oto pana reszta: " << amount - 4 << endl;
            }
            else
            {
                cout << "za malo pieniedzy" << endl;
            }
            break;

    }

    return 0;
}

