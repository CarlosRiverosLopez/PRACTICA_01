// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 3
// Problema planteado: Promedio de lqs notas.

#include <iostream>
using namespace std;
int main() {
    int N;
    double nota, suma = 0.0, promedio;
    cout << "Ingrese la cantidad de notas que quiere sumar: ";
    cin >> N;
    if (N <= 0) {
        cout << "La cantidad de notas debe ser un número positivo." << endl;
        return 1; 
    }
    for (int i = 1; i <= N; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota; 
        suma += nota;
    }
    promedio = suma / N;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
