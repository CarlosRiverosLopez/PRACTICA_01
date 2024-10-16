// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 6
// Problema planteado:Escribe un programa que determine si una cadena es un palíndromo (se lee igual de izquierda a derecha que de derecha a izquierda)

#include <iostream>
#include <string>
#include <algorithm> // biblioteca para transform
#include <cctype>// biblioteca para usar el tolower

using namespace std;

bool esPalindromo(const string& cadena);

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    if (esPalindromo(cadena)) {
        cout << "La cadena es un palíndromo." << endl;
    } else {
        cout << "La cadena no es un palíndromo." << endl;
    }

    return 0;
}

bool esPalindromo(const string& cadena) {
   
    string cadenaLimpia;
    for (char c : cadena) {
        if (isalnum(c)) { 
            cadenaLimpia += tolower(c); 
        }
    }
    string cadenaReversa = cadenaLimpia;
    reverse(cadenaReversa.begin(), cadenaReversa.end());

    return cadenaLimpia == cadenaReversa;
}
