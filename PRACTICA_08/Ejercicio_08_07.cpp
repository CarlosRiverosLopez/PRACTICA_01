/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 7
 Problema planteado: Escribe un programa que solicite una matriz cuadrada de dimensión n x n e imprima los
elementos de la diagonal principal y de la diagonal secundaria. Los elementos deben ser
generados aleatoriamente del 1 al 100.  */

#include <iostream>

using namespace std;

void CrearMatriz(int n,int matriz[][100]);
void MostrarMatriz(int n,int matriz[][100]);


int main(){

    int n;
    cout << "Ingrese el numero que sea su matriz: ";
    cin >> n;

    int matriz[100][100];
    srand(time(NULL));
    CrearMatriz(n,matriz);
    MostrarMatriz(n,matriz);

    return 0;
}

void CrearMatriz(int n,int matriz[][100]){
    for (int i = 0;i < n; i++){
        for (int j = 0; j < n; j++){
            matriz[i][j] = 1 + rand() % ((100 + 1) - 1);
        }
    }
} 

void MostrarMatriz(int n,int matriz[][100]){
    for(int i = 0; i < n; i++){
        for (int j = 0; i < n; i++){
            cout << matriz[i][j] << " ";
        }    
        
        cout << endl;
    }
    
    //Usamos dos for para sacar la diagonal principal y la secundaria
    cout << "Diagonal Principal: ";
    for (int i = 0; i < n; i++){
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    cout << "Diagonal secundaria: ";
    for (int i = 0; i < n; i++) {
        cout << matriz[i][n - 1 - i] << " ";
    }
    cout << endl;
}