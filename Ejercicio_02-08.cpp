// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 8
// Problema planteado: Realizar una función para imprimir los primeros N números de la secuencia de Fibonacci.

#include <iostream>
using namespace std;
 // introduccimos a fibonacci
int fibo (int);

int main (){
    int n;
    cout << "Ingrese la cantidad de numeros"<<endl;
    cin >> n;
    for(int i = 0; i < n; i++){
        int f = fibo(i);
        cout << f << "\t";
    }
    return 0;
}
int fibo (int n){
    int a = 0, b = 1, c = 0;
    if(n == 0){
        return 1;
    }
    for(int i = 0; i < n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}