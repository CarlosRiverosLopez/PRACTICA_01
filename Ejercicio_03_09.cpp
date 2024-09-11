// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 05/09/2024
// Número de ejercicio: 9
// Problema planteado: Generar (para un orden n): Sea n=5: 1 0 1 0 1, 0 1 0 1 0, 1 0 1 0 1, 0 1 0 1 0, 1 0 1 0 1 

#include <iostream>
using namespace std;

void imprimir (int);

int main (){
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    imprimir(n);
}
// Funcion para que imprime 1 o 0 
void imprimir(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i + j) % 2 == 0)
                cout << "1";
            else 
                cout << "0";
        }
        cout << endl;
    }
}