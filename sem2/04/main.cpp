#include <iostream>
#include <cstdlib>
#include <ctime>

enum Choice { ROCK = 1, PAPER, SCISSORS };

std::string choiceToString(int choice) {
    switch (choice) {
        case ROCK: return "Rock";
        case PAPER: return "Paper";
        case SCISSORS: return "Scissors";
        default: return "Invalid";
    }
}

int knp(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) return 0; // Draw
    if ((userChoice == ROCK && computerChoice == SCISSORS) ||
        (userChoice == PAPER && computerChoice == ROCK) ||
        (userChoice == SCISSORS && computerChoice == PAPER)) {
        return 1; // User wins
    }
    return -1; // Computer wins
}

int main() {
    std::srand(std::time(0));
    int userScore = 0, computerScore = 0;

    for (int round = 1; round <= 3; ++round) {
        int userChoice;
        std::cout << "Round " << round << ": Enter your choice (1 - Rock, 2 - Paper, 3 - Scissors): ";
        std::cin >> userChoice;

        if (userChoice < 1 || userChoice > 3) {
            std::cout << "Invalid choice. Please enter 1, 2, or 3.\n";
            --round; // Repeat the round
            continue;
        }

        int computerChoice = std::rand() % 3 + 1;
        std::cout << "Computer chose: " << choiceToString(computerChoice) << "\n";

        int result = knp(userChoice, computerChoice);
        if (result == 1) {
            std::cout << "You win this round!\n";
            ++userScore;
        } else if (result == -1) {
            std::cout << "Computer wins this round!\n";
            ++computerScore;
        } else {
            std::cout << "This round is a draw!\n";
        }
    }

    std::cout << "\nFinal Score: You " << userScore << " - " << computerScore << " Computer\n";
    if (userScore > computerScore) {
        std::cout << "Congratulations! You win the game!\n";
    } else if (userScore < computerScore) {
        std::cout << "Computer wins the game! Better luck next time.\n";
    } else {
        std::cout << "The game is a draw!\n";
    }

    return 0;
}