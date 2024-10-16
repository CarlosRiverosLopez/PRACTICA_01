// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 5
// Problema planteado:Escribe un programa que cuente cuántas palabras hay en una oración. Considera que las palabras están separadas por un espacio.

#include <iostream>
#include <string>
#include <sstream> // Para usar istringstream

using namespace std;

int ContarPalabras(const string& frase);

int main() {
    string frase;
    cout << "Ingrese una oracion: ";
    getline(cin, frase);

    int cantidadPalabras = ContarPalabras(frase);
    cout << "Número de palabras en la oracion: " << cantidadPalabras << endl;

    return 0;
}

int ContarPalabras(const string& frase) {
    istringstream stream(frase);
    string palabra;
    int contador = 0;
    
    // Lee palabra por palabra
    while (stream >> palabra) { 
        contador++;
    }

    return contador;
}