// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 11
// Problema planteado:Realizar una función para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49... para n términos

#include <iostream>
using namespace std;
// funcion de la suma de digitos
void secuencia (int);
int sumaDigitos(int);

int main (){
    int n;
    cout << "Ingrese la cantidad de numeros a generar ";
    cin >> n;
    secuencia(n);
    return 0;
}
// funcion de la secuencia 
void secuencia (int n){
    int sec = 1;
    for(int i = 0; i < n; i++){
        if(i == 0 || i == 1){
            cout << sec << "\t";
            continue;
        }
        if(sec >= 10){
            sec += sumaDigitos(sec);
        } else {
            sec += sec;
        }
        cout << sec << "\t";
    }
}
int sumaDigitos (int num){
    int suma = 0;
    while(num > 0){
        suma += num % 10;
        num /= 10;
    }
    return suma;
}