// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 12
// Problema planteado: Escriba un programa para leer dos valores enteros distintos entre sí, de tal forma que,si el primer número es mayor al segundo, realizar una función para genere una serie descendente, caso contrario, realizar otra función para muestre una serie ascendente; el factor de incremento o decremento es la unidad

#include <iostream>
using namespace std;
// Función para generar y mostrar una serie descendente
void mostrarSerieDescendente(int inicio, int fin) {
    cout << "Serie descendente:" << endl;
    for (int i = inicio; i >= fin; --i) {
        cout << i << " ";
    }
    cout << endl;
}
// Función para generar y mostrar una serie ascendente
void mostrarSerieAscendente(int inicio, int fin) {
    cout << "Serie ascendente:" << endl;
    for (int i = inicio; i <= fin; ++i) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    if (num1 == num2) {
        cout << "Los números deben ser distintos." << endl;
        return 1; 
    }
    // Comparar los números y mostrar la serie correspondiente
    if (num1 > num2) {
        mostrarSerieDescendente(num1, num2);
    } else {
        mostrarSerieAscendente(num1, num2);
    }
    return 0;
}