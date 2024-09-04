// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 7
// Problema planteado: Realizar una función para imprimir la tabla de multiplicar de un número dado.

#include <iostream>
using namespace std;
// Función para imprimir la tabla de multiplicar de un número
void imprimirTablaMultiplicar(int numero) {
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}
int main() {
    int numero;
    cout << "Ingrese un número para mostrar su tabla de multiplicar: ";
    cin >> numero;
    imprimirTablaMultiplicar(numero);
    return 0;
}