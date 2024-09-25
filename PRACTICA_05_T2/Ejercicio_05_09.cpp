// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 19/09/2024
// Número de ejercicio: 9
// Problema planteado: Crea dos funciones, una que calcule el máximo común divisor (MCD) y otra que calcule el mínimo común múltiplo (mcm) de dos números enteros.

#include <iostream>
using namespace std;

// Función para calcular el MCD usando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int residuo = a % b;
        a = b;
        b = residuo;
    }
    return a;
}

// Función para calcular el MCM usando la relación MCM(a, b) = (a * b) / MCD(a, b)
int calcularMCM(int a, int b) {
    return (a * b) / calcularMCD(a, b);
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    int mcd = calcularMCD(num1, num2);
    int mcm = calcularMCM(num1, num2);

    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << endl;
    cout << "El MCM de " << num1 << " y " << num2 << " es: " << mcm << endl;
    
    return 0;
}
