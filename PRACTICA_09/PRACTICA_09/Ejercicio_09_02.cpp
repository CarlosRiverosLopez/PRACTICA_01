/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 2
Problema planteado: Implementa una función recursiva para calcular la potencia de un número.
La función debe recibir dos parámetros, la base a y el exponente n, y
devolver el valor de a^n. Evita usar la función pow de la biblioteca
estándar. Por ejemplo, potencia(2, 3) debería devolver 8. */

#include <iostream>

using namespace std;

int potencia(int a, int n);

int main() {
    int base, exponente;
    
    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;

    if (exponente < 0) {
        cout << "El exponente debe ser un numero entero no negativo." << endl;
        return 1;
    }

    int resultado = potencia(base, exponente);
    cout << base << " elevado a la potencia de " << exponente << " es: " << resultado << endl;

    return 0;
}

int potencia(int a, int n) {
    
    if (n == 0) {   // Si cualquier número elevado a la potencia de 0 es 1
        return 1;
    }

    return a * potencia(a, n - 1);  // Caso recursivo: a^n = a * a^(n-1)
}
