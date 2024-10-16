// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 14
// Problema planteado: Escribe un programa que encuentre y muestre la palabra más larga en una oración. Si hay múltiples palabras con la misma longitud máxima, muestra la primera que aparece.

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string EncontrarPalabraMasLarga(const string& oracion);

int main() {
    string oracion;
    cout << "Ingrese una oración: ";
    getline(cin, oracion);

    string palabraMasLarga = EncontrarPalabraMasLarga(oracion);
    cout << "La palabra más larga es: " << palabraMasLarga << endl;

    return 0;
}

//Funcion para encotrar la palabra ms grande de la frase
string EncontrarPalabraMasLarga(const string& oracion) {
    stringstream ss(oracion);
    string palabra;
    string palabraMasLarga;
    while (ss >> palabra) {
        if (palabra.length() > palabraMasLarga.length()) {
            palabraMasLarga = palabra; 
        }
    }

    return palabraMasLarga;
}
