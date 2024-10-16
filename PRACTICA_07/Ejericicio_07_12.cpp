// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 12
// Problema planteado:Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un delimitador. Por ejemplo, dividir una oración en palabras.

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> DividirCadena(const string& cadena, char delimitador);

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    char delimitador = ' '; 
    vector<string> tokens = DividirCadena(cadena, delimitador);
    cout << "Tokens encontrados:" << endl;
    for (const string& token : tokens) {
        cout << token << endl;
    }
    return 0;
}

//Funcion para dividir la frase
vector<string> DividirCadena(const string& cadena, char delimitador) {
    vector<string> tokens;
    stringstream ss(cadena);
    string token;
    while (getline(ss, token, delimitador)) {
        tokens.push_back(token); 
    }
    return tokens;
}

