/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 6
Problema planteado: Realizar un algoritmo recursivo para calcular el máximo común divisor de
dos números enteros aplicando el algoritmo de Euclides.  */

#include <iostream>

using namespace std;

int mcdEuclides(int a, int b) {
    
    if (b == 0) {  // Si b es 0, el MCD es a
        return a;
    }
    return mcdEuclides(b, a % b);
}

int main() {
    int num1, num2;

    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;

    if (num1 < 0 || num2 < 0) {
        cout << "Los números deben ser no negativos." << endl;
        return 1;
    }
    
    // Calculamos el MCD usando la función recursiva
    int resultado = mcdEuclides(num1, num2);

    cout << "El máximo común divisor de " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}
