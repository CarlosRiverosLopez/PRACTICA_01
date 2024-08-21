// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 4
// Problema planteado: conversion de temperatura.

#include <iostream>
using namespace std; 
int main()
{double grados_Centi, kelvin;
 cout << "Ingrese un numero en grados celcios para convertirlo en kelvin";
 cin >> grados_Centi;
 kelvin= grados_Centi+273.15;
 cout << "La convercion de su numero en Kelvin seria:" << kelvin << endl;
    return 0;
}
