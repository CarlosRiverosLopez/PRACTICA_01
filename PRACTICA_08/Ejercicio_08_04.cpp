/* Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 4
 Problema planteado: Escribe un programa que permita al usuario ingresar N números en un vector. El
programa debe eliminar los elementos duplicados en el vector y mostrar el vector
resultante sin duplicados.  */

#include <iostream>
#include <vector>
#include <set> //Ayuda a eliminar los numeros repetidos

using namespace std;

void ELiminarCopias (int numeros[], int n);

int main(){

     int n;
    cout << "Cuantos numeros ingresara al vector: ";
    cin >> n;
    int numeros[n];
    ELiminarCopias(numeros, n);
    return 0;
}

void ELiminarCopias (int numeros[], int n){
    set<int> numerosUnicos;

    for (int i= 0; i<n; i++){
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
        numerosUnicos.insert(numeros[i]); //Aqui agrega set y se hace la eliminacion de los numeros repetidos
    }

    cout << "Numeros sin duplicar: " << endl;
    for (const int& num : numerosUnicos){
        cout << num << " ";
    }
    cout << endl;

}