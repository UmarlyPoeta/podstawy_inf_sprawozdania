#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Question {
    string question;
    string options[3];
    char correctAnswer;
};

void loadQuestions(const string& filename, vector<Question>& questions) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Could not open the file!" << endl;
        return;
    }

    Question q;
    while (getline(file, q.question)) {
        for (int i = 0; i < 3; ++i) {
            getline(file, q.options[i]);
        }
        file >> q.correctAnswer;
        file.ignore(); 
        questions.push_back(q);
    }

    file.close();
}

int main() {
    vector<Question> questions;
    loadQuestions("questions.txt", questions);

    int correctAnswers = 0;
    char userAnswer;

    for (const auto& q : questions) {
        cout << q.question << endl;
        for (int i = 0; i < 3; ++i) {
            cout << q.options[i] << endl;
        }
        cout << "Your answer: ";
        cin >> userAnswer;

        if (userAnswer == q.correctAnswer) {
            ++correctAnswers;
        }
    }

    cout << "Twój wynik to " << correctAnswers << "/" << questions.size() << "!" << endl;

    return 0;
}