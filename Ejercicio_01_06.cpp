// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 6
// Problema planteado: Si es tu amigo.

#include <iostream>
using namespace std;
int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i <= n / 2; ++i) {
       if (n % i == 0) {
        suma += i;
}
}
    return suma;
}
int main() {
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
 if (num1 <= 0 || num2 <= 0) {
    cout << "Los números deben ser positivos." << endl;
        return 1;
    }
    int suma1 = sumaDivisores(num1);
    int suma2 = sumaDivisores(num2);
    if (suma1 == num2 && suma2 == num1) {
    cout << num1 << " y " << num2 << " son números amigos." << endl;
    } else {
    cout << num1 << " y " << num2 << " no son números amigos." << endl;
    }

    return 0;
}
