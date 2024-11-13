/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 13
Problema planteado:  Realizar un algoritmo recursivo para calcular el coeficiente binomial a
partir de la lectura de dos números enteros, a partir de la relación:  */

#include <iostream>
using namespace std;

int coeficienteBinomial(int n, int m);

int main() {
    int n, m;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;
    
    int resultado = coeficienteBinomial(n, m);
    cout << "El coeficiente binomial (" << n << " sobre " << m << ") es: " << resultado << endl;
    
    return 0;
}

int coeficienteBinomial(int n, int m) {  //Funcion la cual usa la formula que nos da el programa
    if (m == 0 || m == n) {
        return 1;
    } else {
        return coeficienteBinomial(n - 1, m - 1) + coeficienteBinomial(n - 1, m);
    }
}