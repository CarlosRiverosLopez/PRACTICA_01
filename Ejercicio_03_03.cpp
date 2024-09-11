// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 05/09/2024
// Número de ejercicio: 3
// Problema planteado:  Convertir un número en base n a base 10, empleando el Teorema Fundamental de la Numeración: Ej: Convertir 10102 base 10 1 * 23 + 0 * 22 + 1 * 21 + 0 * 20 = 10

#include <iostream>
#include <math.h>

using namespace std;

int valorDecimal(int, int);

int main (){
    int numero, base;
    cout << "Ingrese la base del numero (maximo 10): ";
    cin >> base;
    cout << "Ingrese el numero: ";
    cin >> numero;
    int valDec = valorDecimal(numero, base);
    cout << "El valor en el sistema decimal es: "<< valDec << endl;
}
//Funcion para sumar el decimal y volverlo en base 10 
int valorDecimal (int numero, int base){
    int suma = 0, potencia = 0;
    while(numero > 0){
        int digito = numero % 10;
        suma += (digito * pow(base, potencia));
        potencia ++;
        numero /= 10;
    }
    return suma;
}