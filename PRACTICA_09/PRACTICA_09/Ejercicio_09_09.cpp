/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 9
Problema planteado:  Realizar un algoritmo recursivo para comparar si dos vectores son iguales.  */


#include <iostream>
#include <vector>

using namespace std;

bool sonIguales(const vector<int>& vec1, const vector<int>& vec2, int indice) {
    if (indice == vec1.size() && indice == vec2.size()) {
        return true;
    }

    // Si los vectores tienen diferentes tamaños, no son iguales
    if (indice == vec1.size() || indice == vec2.size()) {
        return false;
    }

    // Si los elementos en la posición actual no son iguales, los vectores no son iguales
    if (vec1[indice] != vec2[indice]) {
        return false;
    }

    return sonIguales(vec1, vec2, indice + 1);
}

int main() {
    vector<int> vec1, vec2;
    int n1, n2, elemento;

    cout << "Introduce el número de elementos del primer vector: ";
    cin >> n1;
    cout << "Introduce los elementos del primer vector: ";
    for (int i = 0; i < n1; ++i) {
        cin >> elemento;
        vec1.push_back(elemento);
    }

    cout << "Introduce el número de elementos del segundo vector: ";
    cin >> n2;
    cout << "Introduce los elementos del segundo vector: ";
    for (int i = 0; i < n2; ++i) {
        cin >> elemento;
        vec2.push_back(elemento);
    }

    if (sonIguales(vec1, vec2, 0)) {
        cout << "Los vectores son iguales." << endl;
    } else {
        cout << "Los vectores no son iguales." << endl;
    }

    return 0;
}
