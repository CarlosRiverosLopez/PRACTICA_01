/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 1
Problema planteado: Escribe una función recursiva que reciba un número entero positivo y
devuelva la suma de sus dígitos. Por ejemplo: para el número 1234, el
resultado debería ser 10 (1 + 2 + 3 + 4)  */

#include <iostream>

using namespace std;

int sumaDigitos(int n);

int main() {
    int numero;
    cout << "Introduce un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Por favor, ingresa un número entero positivo." << endl;
        return 1;
    }

    int resultado = sumaDigitos(numero);
    cout << "La suma de los dígitos de " << numero << " es: " << resultado << endl;

    return 0;
}

int sumaDigitos(int n) {
    
    if (n == 0) {   //  cuando el número es 0, la suma es 0
        return 0;
    }
    
    return n % 10 + sumaDigitos(n / 10); // Llamada recursiva: obtener el último dígito y sumar el resto de los dígitos
}
