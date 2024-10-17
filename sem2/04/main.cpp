#include <iostream>
#include <cstdlib>
#include <ctime>

enum Choice { ROCK = 1, PAPER, SCISSORS };

std::string choiceToString(int choice) {
    switch (choice) {
        case ROCK: return "kamien";
        case PAPER: return "papier";
        case SCISSORS: return "nozyce";
        default: return "nieprawidlowe";
    }
}

int knp(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) return 0; // Draw
    if ((userChoice == ROCK && computerChoice == SCISSORS) ||
        (userChoice == PAPER && computerChoice == ROCK) ||
        (userChoice == SCISSORS && computerChoice == PAPER)) {
        return 1; // wygrywasz
    }
    return -1; // przegrywasz
}

int main() {
    std::srand(std::time(0));
    int userScore = 0, computerScore = 0;

    for (int round = 1; round <= 3; ++round) {
        int userChoice;
        std::cout << "Runda " << round << ": Wybierz (1 - kamien, 2 - papier, 3 - nozyczki): ";
        std::cin >> userChoice;

        if (userChoice < 1 || userChoice > 3) {
            std::cout << "wybierz 1/2/3 \n";
            --round; // powtorz runde
            continue;
        }

        int computerChoice = std::rand() % 3 + 1;
        std::cout << "komputer : " << choiceToString(computerChoice) << "\n";

        int result = knp(userChoice, computerChoice);
        if (result == 1) {
            std::cout << "Wygrywasz!\n";
            ++userScore;
        } else if (result == -1) {
            std::cout << "Przegrywasz!\n";
            ++computerScore;
        } else {
            std::cout << "Remis!\n";
        }
    }

    std::cout << "\nWYNIKI: Ty " << userScore << " - " << computerScore << " Komputer\n";
    if (userScore > computerScore) {
        std::cout << "gratki! wygrales!\n";
    } else if (userScore < computerScore) {
        std::cout << "ilosc sekund od 1970 cie pokonala :/ \n";
    } else {
        std::cout << "remisik\n";
    }

    return 0;
}