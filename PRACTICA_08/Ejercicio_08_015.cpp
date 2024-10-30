/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 15
 Problema planteado: Crea un programa que solicite al usuario ingresar una lista de n palabras.
Almacena cada palabra en una fila de una matriz de caracteres, de manera que
cada columna represente un carácter de la palabra. Si una palabra es más corta
que otras, completa la fila con espacios en blanco. Muestra la matriz resultante.  */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAX_LONGITUD = 100; 

void mostrarMatriz(const vector<vector<char>>& matriz, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matriz[i][j];
        }
        cout << endl; 
    }
}

int main() {
    int n;
    cout << "Ingrese el número de palabras: ";
    cin >> n;
    cin.ignore(); // Ignorar el salto de línea después de leer n

    vector<vector<char>> matriz(n, vector<char>(MAX_LONGITUD, ' ')); // Inicializar matriz

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese la palabra " << i + 1 << ": ";
        string palabra;
        getline(cin, palabra); 

        for (size_t j = 0; j < palabra.length() && j < MAX_LONGITUD; ++j) {
            matriz[i][j] = palabra[j];
        }
        // Si la palabra es más corta, los espacios ya están llenos
    }

    cout << "Matriz resultante:" << endl;
    mostrarMatriz(matriz, n, MAX_LONGITUD);

    return 0;
}
