// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 16
// Problema planteado: Multipos entre 3 y 5 o en los dos.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa el valor de N: ";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "z" << endl;
        } else if (i % 3 == 0) {
            cout << "x" << endl;
        } else if (i % 5 == 0) {
            cout << "y" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}