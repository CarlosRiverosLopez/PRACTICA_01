// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 19/09/2024
// Número de ejercicio: 6
// Problema planteado:Escribir un algoritmo que permita generar 50 números al azar en el rango (1-99) y determine cuántos de estos elementos son números primos.
#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

bool EsPrimo(int);
void generar();

int main (){
    generar();
}
//Funcion para que sea un primo o no 
bool EsPrimo (int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

void generar (){
    srand(time(0));

    for(int i = 0; i < 50; i++){
        int numero = (rand() % 99) + 1;
        cout << numero;
        if(EsPrimo(numero)){
            cout << " es primo"<<endl;
        } else {
            cout << endl;
        }
    }
}