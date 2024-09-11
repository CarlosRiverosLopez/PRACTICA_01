// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 05/09/2024
// Número de ejercicio: 2
// Problema planteado: Simular el lanzamiento de un dado n veces y determinar la frecuencia de  repetición de las caras pares.

#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void ContarPares();

int main (){
    ContarPares();
}
// Funcion para n numeros de lanzamientos
void ContarPares(){
    srand(time(0));
    int n;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;
    int pares = 0;
    for(int i = 0; i < n; i++){
        int sim = (rand() % 6) + 1;
        if(sim % 2 == 0){
            pares++;
        }
    }
    cout << "La cantidad de numeros pares es: " << pares << endl;
}
