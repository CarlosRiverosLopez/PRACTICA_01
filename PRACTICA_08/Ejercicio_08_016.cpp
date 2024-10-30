/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 16
 Problema planteado: Desarrolla un programa que permita al usuario ingresar una matriz de m x n
cadenas (donde cada celda contiene una palabra). Luego, pide al usuario una
letra y cuenta cuántas veces aparece esa letra en toda la matriz. Muestra el
resultado. */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int contarLetra(const vector<vector<string>>& matriz, char letra) {
    int contador = 0;
    for (const auto& fila : matriz) {
        for (const auto& palabra : fila) {
            contador += count(palabra.begin(), palabra.end(), letra); // Cuenta la letra en cada palabra
        }
    }
    return contador;
}

int main() {
    int m, n;
    cout << "Ingrese el número de filas (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas (n): ";
    cin >> n;

    vector<vector<string>> matriz(m, vector<string>(n)); // Crear la matriz de cadenas

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Ingrese la palabra para la posición [" << i << "][" << j << "]: ";
            cin >> matriz[i][j]; 
        }
    }

    char letra;
    cout << "Ingrese una letra para contar: ";
    cin >> letra;

    int total = contarLetra(matriz, letra);
    
    cout << "La letra '" << letra << "' aparece " << total << " veces en la matriz." << endl;

    return 0;
}
