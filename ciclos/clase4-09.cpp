#include <iostream>
using namespace std;

void sumOfTwoValues(int valueOne, int valueTwo) {
    int sumResult = valueOne + valueTwo;
    cout << "La suma de los valores es: " << sumResult << endl;
}

void subtractOfTwoValues(int valueOne, int valueTwo) {
    int subtractResult = valueOne - valueTwo;
    cout << "La resta de los valores es: " << subtractResult << endl;
}

void multipOfTwoValues(int valueOne, int valueTwo) {
    int multipResult = valueOne * valueTwo; 
    cout << "La multiplicacion de los valores es: " << multipResult << endl;
}

void diviOfTwoValues(int valueOne, int valueTwo) {
    int dividResult = valueOne / valueTwo;
    cout << "La division de los valores es: " << dividResult << endl;
}
int main() {
    int valueOne, valueTwo;

    cout << "Ingrese un numero: ";
    cin >> valueOne;

    cout << "Ingrese otro numero: ";
    cin >> valueTwo;

    sumOfTwoValues(valueOne, valueTwo);
    subtractOfTwoValues(valueOne, valueTwo);
    multipOfTwoValues(valueOne, valueTwo);
    diviOfTwoValues(valueOne, valueTwo);

    return 0;
}
#include <iostream>
using namespace std;

// Función que compara si la respuesta es correcta
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
    cout << "Pregunta 1 (a/b/c): ";
    cin >> answer;
    score += questionScore(isCorrect(answer, 'a'));

    // Pregunta 2
    cout << "Pregunta 2 (a/b/c): ";
    cin >> answer;
    score += questionScore(isCorrect(answer, 'a'));

    // Pregunta 3
    cout << "Pregunta 3 (a/b/c): ";
    cin >> answer;
    score += questionScore(isCorrect(answer, 'a'));

    // Mostrar puntaje final
    cout << "\nPuntaje final: " << score << endl;
}

int main() {
    playQuiz();
    return 0;
}
