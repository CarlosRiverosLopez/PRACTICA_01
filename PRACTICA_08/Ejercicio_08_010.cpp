/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 10
 Problema planteado: Crea un programa que permita al usuario ingresar una matriz m x n. Muestra solo los
elementos que se encuentran en el borde de la matriz (primera y última fila, y primera y
última columna). Los elementos deben ser generados aleatoriamente del 1 al 100. */  


#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>   

using namespace std; 

void generarMatriz(int m, int n, vector<vector<int>>& matriz);
void mostrarBorde(const vector<vector<int>>& matriz);

int main() {
    int m, n;

    cout << "Ingrese el número de filas (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas (n): ";
    cin >> n;

    vector<vector<int>> matriz;
    srand(time(NULL)); // Inicializa la semilla para números aleatorios
    generarMatriz(m, n, matriz);

    cout << "\nMatriz generada:\n";
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            cout << valor << " ";
        }
        cout << endl;
    }

    cout << "\nElementos en el borde de la matriz:\n";
    mostrarBorde(matriz);
    cout << endl;

    return 0;
}

// Definición de funciones
void generarMatriz(int m, int n, vector<vector<int>>& matriz) {
    for (int i = 0; i < m; i++) {
        vector<int> fila;
        for (int j = 0; j < n; j++) {
            fila.push_back(rand() % 100 + 1); // Genera un número aleatorio entre 1 y 100
        }
        matriz.push_back(fila);
    }
}

void mostrarBorde(const vector<vector<int>>& matriz) {
    int m = matriz.size();
    if (m == 0) return;
    int n = matriz[0].size();

    // Mostrar primera fila
    for (int j = 0; j < n; j++) {
        cout << matriz[0][j] << " ";
    }

    // Mostrar última fila (si hay más de una fila)
    if (m > 1) {
        for (int j = 0; j < n; j++) {
            cout << matriz[m - 1][j] << " ";
        }
    }

    // Mostrar primer y último elemento de las filas intermedias
    for (int i = 1; i < m - 1; i++) {
        cout << matriz[i][0] << " "; // Primer elemento
        if (n > 1) {
            cout << matriz[i][n - 1] << " "; // Último elemento
        }
    }
}




