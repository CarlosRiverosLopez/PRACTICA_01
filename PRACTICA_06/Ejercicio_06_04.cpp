// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 04/10/2024
// Número de ejercicio: 4
// Problema planteado: Generar la matriz para un orden nxn.

#include <iostream>
#include <vector>

using namespace std;

// Función para generar una matriz n x n con un patrón específico
vector<vector<int>> generarMatriz(int n) {
    vector<vector<int>> matriz(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = 2 * (i + j) + 1;
        }
    }
    return matriz;
}


void mostrarMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            cout << valor << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz (n): ";
    cin >> n;

    vector<vector<int>> matriz = generarMatriz(n);

    cout << "Matriz generada:" << endl;
    mostrarMatriz(matriz);

    return 0;
}
