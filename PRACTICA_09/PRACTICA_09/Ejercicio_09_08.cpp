/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 8
Problema planteado: Realizar un algoritmo recursivo, dado un vector de números enteros,
retorne la suma de sus elementos.  */

#include <iostream>
#include <vector>

using namespace std;

int sumaVector(const vector<int>& vec, int indice) {
    if (indice == vec.size()) {  // Si hemos recorrido todo el vector, la suma es 0
        return 0;
    }

    return vec[indice] + sumaVector(vec, indice + 1);   // Sumamos el elemento actual con la suma del resto del vector
}

int main() {
    vector<int> vec;
    int n, elemento;

    cout << "Introduce el número de elementos del vector: ";
    cin >> n;

    cout << "Introduce los elementos del vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> elemento;
        vec.push_back(elemento);
    }

    int suma = sumaVector(vec, 0);

    cout << "La suma de los elementos del vector es: " << suma << endl;

    return 0;
}
