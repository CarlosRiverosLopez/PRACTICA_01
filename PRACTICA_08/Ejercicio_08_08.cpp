/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 8
 Problema planteado: Desarrolla un programa que permita al usuario ingresar una matriz de dimensiones m x
n y un número a buscar dentro de la matriz. El programa debe indicar la posición (fila y
columna) donde se encuentra el número o informar si no está en la matriz. Los elementos
deben ser generados aleatoriamente del 1 al 100. */


#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

void GenerarMatriz(int m, int n, int matriz[][100]);
void MostrarMatriz(int m, int n, int matriz[][100]);
void BuscarNumero(int m, int n, int matriz[][100], int numero);

int main() {
    int m, n;
    
    cout << "Ingrese el número de filas (m): ";
    cin >> m;
    cout << "Ingrese el número de columnas (n): ";
    cin >> n;

    int matriz[100][100];
    srand(time(NULL));

    GenerarMatriz(m, n, matriz);
    MostrarMatriz(m, n, matriz);

    int numeroBuscado;
    cout << "Ingrese el número a buscar en la matriz: ";
    cin >> numeroBuscado;

    BuscarNumero(m, n, matriz, numeroBuscado);

    return 0;
}

void GenerarMatriz(int m, int n, int matriz[][100]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = 1 + rand() % 100; // Genera números aleatorios del 1 al 100
        }
    }
}

void MostrarMatriz(int m, int n, int matriz[][100]) {
    cout << "Matriz generada:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " "; // Muestra cada elemento de la matriz
        }
        cout << endl;
    }
}

void BuscarNumero(int m, int n, int matriz[][100], int numero) {
    bool encontrado = false;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == numero) {
                cout << "Número " << numero << " encontrado en la posición: "
                     << "Fila " << i + 1 << ", Columna " << j + 1 << endl;
                encontrado = true;
            }
        }
    }

    if (!encontrado) {
        cout << "Número " << numero << " no encontrado en la matriz." << endl;
    }
}
