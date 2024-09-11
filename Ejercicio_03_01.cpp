// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 05/09/2024
// Número de ejercicio: 1
// Problema planteado:  Obtener la suma de la serie: 4 + 6 + 9 + 13 + 19 + 28 + 42 +……. Para n términos

#include <iostream>
using namespace std;

// Función que retorna el término n de la serie
int termino_n(int n) {
    int a = 1, b = 0, c = 3;
    return a * n * n + b * n + c;
}

// Función que calcula la suma de los primeros n términos de la serie
int suma_serie(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += termino_n(i);
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese el número de términos de la serie: ";
    cin >> n;

    int suma = suma_serie(n);
    cout << "La suma de los primeros " << n << " términos de la serie es: " << suma << endl;

    return 0;
}
