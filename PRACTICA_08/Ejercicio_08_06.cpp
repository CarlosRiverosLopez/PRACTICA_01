/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 6
 Problema planteado: Genera la matirz para un orden nxn  */

#include <iostream>

using namespace std;

void CrearMatriz(int n, int matriz[][10]);  
void MostrarMatriz(int n, int matriz[][10]); 

int main() {
    int n;
    cout << "Ingrese el tamaño que quiere para su matriz: ";
    cin >> n;

    int matriz[100][100]; // Puedes usar un tamaño máximo, en este caso sera 100

    CrearMatriz(n, matriz);
    MostrarMatriz(n, matriz);

    return 0;
}

void CrearMatriz(int n, int matriz[][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = i + j + 1; // Para llenar la matriz
        }
    }
}

void MostrarMatriz(int n, int matriz[][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl; 
    }
}
