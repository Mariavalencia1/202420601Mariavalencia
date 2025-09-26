
#include <iostream>
using namespace std;


bool isCorrect(char userAnswer, char correctAnswer) {
    return userAnswer == correctAnswer;
}


int questionScore(bool correct) {
    if (correct) {
        return 10;
    } else {
        return 0;
    }
}


void playQuiz() {
    char answer;
    int totalScore = 0;

   
    cout << " (a)  (b) (c) : ";
    cin >> answer;
    totalScore += questionScore(isCorrect(answer, 'b'));

   
    cout << " (a)  (b) (c) : ";
    cin >> answer;
    totalScore += questionScore(isCorrect(answer, 'c'));

    
    cout << "Pregunta 3: (a)  (b)  (c) : ";
    cin >> answer;
    totalScore += questionScore(isCorrect(answer, 'a'));

   
    cout << "Puntaje final: " << totalScore << endl;
}

int main() {
    playQuiz();
    return 0;
}