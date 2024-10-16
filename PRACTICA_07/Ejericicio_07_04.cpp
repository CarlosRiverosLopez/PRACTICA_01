// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 4
// Problema planteado:Escribe un programa que elimine todos los espacios de una cadena.

#include <iostream>
#include <string>
#include <cctype>// biblioteca para usar el tolower
#include <algorithm>//biblioteca para usar transform

using namespace std;

void CompararCadenas(string cadena1, string cadena2);

int main(){
    string cadena1, cadena2;
    cout << "Ingrese el primera frase:";
    getline(cin, cadena1);
    cout << "Ingrese la segunda frase:";
    getline(cin, cadena2);
    CompararCadenas(cadena1, cadena2);
    return 0;
}

void CompararCadenas(string cadena1, string cadena2) {
    // Convertir ambas cadenas a minúsculas
    transform(cadena1.begin(), cadena1.end(), cadena1.begin(), ::tolower);
    transform(cadena2.begin(), cadena2.end(), cadena2.begin(), ::tolower);

    if (cadena1 == cadena2) {
        cout << "Las cadenas son iguales" << endl;
    } else {
        cout << "No son iguales" << endl;
    }
}