#include <iostream>
#include <vector>
#include <random>
#include <time.h>


using namespace std;


int generate_number()
{
    return rand() % 6;
}


void displayDiceFace(int number) {
    vector<vector<string>> faces = {
        {"┌─────┐",
         "│     │",
         "│  ●  │",
         "│     │",
         "└─────┘"},

        {"┌─────┐",
         "│●    │",
         "│     │",
         "│    ●│",
         "└─────┘"},

        {"┌─────┐",
         "│●    │",
         "│  ●  │",
         "│    ●│",
         "└─────┘"},

        {"┌─────┐",
         "│●   ●│",
         "│     │",
         "│●   ●│",
         "└─────┘"},

        {"┌─────┐",
         "│●   ●│",
         "│  ●  │",
         "│●   ●│",
         "└─────┘"},

        {"┌─────┐",
         "│●   ●│",
         "│●   ●│",
         "│●   ●│",
         "└─────┘"}
    };

    for (const auto &line : faces[number]) {
        std::cout << line << std::endl;
    }
}

int main() {
    srand(time(NULL));
    int ilosc, sum = 0;
    int ilosc_wystapien[6] = {0, 0, 0, 0, 0, 0};
    cout << "podaj ile razy chcesz rzucic koscia: ";
    cin >> ilosc;

    for (int i = 0; i < ilosc; i++)
    {
        int wyrzucona_liczba = generate_number();
        sum += (wyrzucona_liczba + 1);
        ilosc_wystapien[wyrzucona_liczba]++;
        displayDiceFace(wyrzucona_liczba);
    }

    cout << "suma oczek wynosi: " << sum << endl;
    cout << "lista wystapien" << endl << endl;

    for (int i = 0; i < 6; i++)
        cout << i+1 << ": " << ilosc_wystapien[i] << endl;
    

    return 0;
}
