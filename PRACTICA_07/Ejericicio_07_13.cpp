// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 13
// Problema planteado: Escribe un programa que invierta el orden de las palabras en una oración sin cambiar el orden de los caracteres dentro de cada palabra.

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string InvertirOrdenPalabras(const string& oracion);

int main() {
    string oracion;
    cout << "Ingrese una oración: ";
    getline(cin, oracion);

    string resultado = InvertirOrdenPalabras(oracion);
    cout << "Oración con el orden de las palabras invertido: " << resultado << endl;

    return 0;
}

//Funcion para invertir las palabras de la frase
string InvertirOrdenPalabras(const string& oracion) {
    stringstream ss(oracion);
    vector<string> palabras;
    string palabra;
    while (ss >> palabra) {
        palabras.push_back(palabra); 
    }
    string resultado;
    for (int i = palabras.size() - 1; i >= 0; --i) {
        resultado += palabras[i];
        if(i > 0){
            resultado += ' '; 
        }
    }

    return resultado;
}
