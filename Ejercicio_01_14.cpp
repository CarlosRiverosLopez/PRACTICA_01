// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 14
// Problema planteado: Un factor entero sin emplear el producto.
#include <iostream>
using namespace std;
int suma(int a, int b) {
    return a + b;
}
int multiplicar(int a, int b) {
    int resultado = 0;
    for (int i = 0; i < b; i++) {
        resultado = suma(resultado, a);
    }
    return resultado;
}
int factorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado = multiplicar(resultado, i);
    }
    return resultado;
}
int main() {
    int n;
    cout << "Ingresa un número entero: ";
    cin >> n;

    if (n < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << n << " es: " << factorial(n) << endl;
    }
    return 0;
}