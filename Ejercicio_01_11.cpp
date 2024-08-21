// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 11
// Problema planteado: multiplicar sin el signo de "*".
#include <iostream>
using namespace std;
int main() {
    int num1, num2, r = 0;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    for (int i = 0; i < abs(num2); i++) {
        r += num1;
    }
    if (num2 < 0) {
        r = -r;
    }
    cout << "El resultado es: " << r << endl;

    return 0;
}