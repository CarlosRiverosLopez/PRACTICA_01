// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 14
// Problema planteado: Realizar una función para generar los cuadrados perfectos en el rango 1 a n. Un número cuadrado, es un número entero que es el cuadrado de algún otro; dicho de otro modo, es un número cuya raíz cuadrada es un número natural.

#include <iostream>
#include <math.h>
using namespace std;
// Este genera a la funcion int 
void generar (int);

int main (){
    int n;
    cout << "Ingrese el limite ";
    cin >> n;
    generar(n);
}

void generar (int n){
    int cuad = 1, inc = 2;
    while(cuad <= n){
        cout << cuad << endl;
        cuad = pow(inc,2);
        inc ++;
    }
}