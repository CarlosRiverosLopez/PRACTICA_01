// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 13
// Problema planteado:Realizar una función para generar una secuencia de números aleatorios entre 1 y 100, desplegar en pantalla todos los números generados y si el número es divisible entre 5, al lado del número debe imprimir un asterisco (*).

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// funcion de los numeros aleatorios
void aleatorios (int);

int main (){
    int n;
    cout << "Ingrese cuantos numeros desea generar ";
    cin >> n;
    aleatorios(n);
}
void aleatorios (int n){
    srand(time(0));
    for(int i = 0; i < n; i++){
        int r = (rand() % 99) + 1;
        cout << r;
        if(r % 5 == 0){
            cout << "*\n";
        } else {
            cout << "\n";
        }
    }
}