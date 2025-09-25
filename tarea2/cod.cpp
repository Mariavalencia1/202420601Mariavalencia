#include <iostream>
using namespace std;


bool isCorrect(char userAnswer, char correctAnswer) {
    return userAnswer == correctAnswer;
}

// Función que retorna 10 si es correcta, 0 si es incorrecta
int questionScore(bool correct) {
    if (correct) {
        return 10;
    } else {
        return 0;
    }
}

// Función principal del quiz
void playQuiz() {
    char answer;
    int score = 0;

    // Pregunta 1
    cout << "Pregunta 1: ¿Cuál es la capital de Francia?" << endl;
    cout << "a) Madrid  b) Paris  c) Roma" << endl;
    cout << "Tu respuesta: ";
    cin >> answer;
    score += questionScore(isCorrect(answer, 'b'));

    // Pregunta 2
    cout << "\nPregunta 2: ¿Cuál es el resultado de 2 * 3?" << endl;
    cout << "a) 5  b) 8  c) 6" << endl;
    cout << "Tu respuesta: ";
    cin >> answer;
    score += questionScore(isCorrect(answer, 'c'));

    // Pregunta 3
    cout << "\nPregunta 3: ¿Qué letra es la primera del abecedario?" << endl;
    cout << "a) A  b) B  c) C" << endl;
    cout << "Tu respuesta: ";
    cin >> answer;
    score += questionScore(isCorrect(answer, 'a'));

    // Mostrar puntaje final
    cout << "\nPuntaje final: " << score << endl;
}

int main() {
    playQuiz();
    return 0;
}
