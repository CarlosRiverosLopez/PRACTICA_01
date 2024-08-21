// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 13
// Problema planteado: Un numero al reves.
#include <iostream>
using namespace std;
int main() {
    int num_orig, rev = 0;
    cout << "Ingresa un número entero: ";
    cin >> num_orig;
    while (num_orig != 0) {
        rev = rev * 10 + num_orig % 10;
        num_orig /= 10;
    }
    cout << "El número con las cifras al revés es: " << rev << endl;
    return 0;
}