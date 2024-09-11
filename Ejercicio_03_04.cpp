// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 05/09/2024
// Número de ejercicio: 4
// Problema planteado: Mediante una función obtener la suma de la serie: 1 - 4 + 9 - 16 + 25 - 36 +…………………. Para n términos

#include <iostream>
using namespace std;

// Función que genera el término n-ésimo de la serie
int generarTermino(int n) {
    return ((n % 2 == 1) ? 1 : -1) * n * n;
}

// Función que calcula la suma de los primeros n términos de la serie
int sumaSerie(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += generarTermino(i); 
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese el número de términos de la serie: ";
    cin >> n;

    int suma = sumaSerie(n);
    cout << "La suma de los primeros " << n << " términos de la serie es: " << suma << endl;

    return 0;
}
