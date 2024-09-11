// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 05/09/2024
// Número de ejercicio: 6
// Problema planteado:  Escribir un algoritmo que permita adivinar un número que se genere internamente  al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en  base a aproximaciones para lo cual se dispone de 5 intentos. 

#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void adivinar ();

int main (){
    adivinar();
}

// Funcion para que salga un numero random
void adivinar (){
    srand(time(0));
    int numero = rand() % 50;
    cout << "El numero es " << numero << "\n";
    int intentos = 0, limInf = 0, limSup = 50;
    bool ganar = false;
    while(intentos < 5){
        cout << "Intento numero " << intentos + 1 << ":\n";
        cout << "El numero esta entre " << limInf << " y " << limSup << endl;
        int var; cin >> var;
        if(var == numero){
            ganar = true;
            intentos = 5;
        } else if (var > limInf && var < numero){
            limInf = var;
        } else if (var < limSup && var > numero){
            limSup = var;
        }
        intentos++;
    }

    if(ganar){
        cout << "Felicidades, Ganaste\n";
    } else {
        cout << "Que pena, Perdiste\n";
    }
}