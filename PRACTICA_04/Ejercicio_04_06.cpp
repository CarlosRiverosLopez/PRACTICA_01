// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/09/2024
// Número de ejercicio: 6
// Problema planteado:Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.

#include <iostream>
#include <vector>
using namespace std;

void ingresarValores(vector<int>& vec, const string& nombre) {
    cout << "Introduce los valores para " << nombre << ":\n";
    for (int i = 0; i < 5; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> vec[i];
    }
}

// Función para sumar dos vectores y almacenar el resultado en otro vector
void sumarVectores(const vector<int>& vec1, const vector<int>& vec2, vector<int>& vec3) {
    for (int i = 0; i < 5; i++) {
        vec3[i] = vec1[i] + vec2[i];
    }
}

void mostrarVector(const vector<int>& vec, const string& nombre) {
    cout << nombre << ": ";
    for (int i = 0; i < 5; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vector1(5), vector2(5), vector3(5);

    ingresarValores(vector1, "vector1");
    ingresarValores(vector2, "vector2");
    sumarVectores(vector1, vector2, vector3);
    mostrarVector(vector1, "vector1");
    mostrarVector(vector2, "vector2");
    mostrarVector(vector3, "vector3 (suma)");
    return 0;
}
