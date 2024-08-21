// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 12
// Problema planteado: Multiplos entre dos numeros entre si.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    if (num1 % num2 == 0 || num2 % num1 == 0) {
        cout << "Uno de los números es múltiplo del otro." << endl;
    } else {
        cout << "Ninguno de los números es múltiplo del otro." << endl;
    }
    return 0;
}