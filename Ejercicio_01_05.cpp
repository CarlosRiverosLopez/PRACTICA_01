// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 5
// Problema planteado: Si el numero es primo.
#include <iostream>
using namespace std;
bool Primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
int main() {
    int numero;
    cout << "Introduce un número: ";
    cin >> numero;
    if (Primo(numero)) 
        cout << numero << " es un número primo." << endl;
    else 
        cout << numero << " no es un número primo." << endl;
    return 0;
}
