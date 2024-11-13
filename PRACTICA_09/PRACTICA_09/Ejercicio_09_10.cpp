/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 10
Problema planteado:  Realizar un algoritmo recursivo para la siguiente función: */

#include <iostream>

using namespace std;

int calcularSumaCuadrados(int n);

int main() {
    int n;
    cout << "Ingrese un valor entero para n: ";
    cin >> n;
    
    int resultado = calcularSumaCuadrados(n);
    cout << "El resultado de Q(" << n << ") es: " << resultado << endl;
    
    return 0;
}

int calcularSumaCuadrados(int n) {  //Funcion requerida en el programa
    if (n == 1) {
        return 1;
    } else {
        return n * n + calcularSumaCuadrados(n - 1);
    }
}