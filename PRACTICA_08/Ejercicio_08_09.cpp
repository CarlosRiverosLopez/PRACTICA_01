/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 9
 Problema planteado: Desarrolla un programa que permita al usuario ingresar una matriz m x n. Determina si
la matriz es esparsa, es decir, si la mayoría de sus elementos son ceros (por ejemplo, si
más del 50% de los elementos son cero). Los elementos deben ser generados
aleatoriamente del 0 al 10  */


#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void GenerarMatriz(int m, int n, int matriz[][100]);
void MostrarMatriz(int m, int n, int matriz[][100]);
bool EsMatrizEsparsa(int m, int n, int matriz[][100]);

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

    if (EsMatrizEsparsa(m, n, matriz)) {
        cout << "La matriz es esparsa." << endl;
    } else {
        cout << "La matriz no es esparsa." << endl;
    }

    return 0;
}

void GenerarMatriz(int m, int n, int matriz[][100]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 11; // Genera números aleatorios del 0 al 10
        }
    }
}

void MostrarMatriz(int m, int n, int matriz[][100]) {
    cout << "Matriz generada:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " "; 
        }
        cout << endl; 
    }
}

bool EsMatrizEsparsa(int m, int n, int matriz[][100]) {
    int contadorCeros = 0;
    int totalElementos = m * n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == 0) {
                contadorCeros++;
            }
        }
    }

    // La matriz es esparsa si más del 50% de sus elementos son ceros
    return contadorCeros > totalElementos / 2;
}
