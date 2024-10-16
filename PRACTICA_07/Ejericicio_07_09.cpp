// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 9
// Problema planteado:Escribe un programa que "comprima" una cadena de caracteres, es decir, que agrupe caracteres consecutivos y cuente su frecuencia.

#include <iostream>
#include <string>

using namespace std;

string ComprimirCadena(const string& cadena);

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    string resultado = ComprimirCadena(cadena);
    cout << "Cadena comprimida: " << resultado << endl;

    return 0;
}

//Funcion para comprimir la frase 
string ComprimirCadena(const string& cadena) {
    if (cadena.empty()) {
        return ""; a
    }
    string resultado;
    char caracterActual = cadena[0];
    int contador = 1;
    for (size_t i = 1; i < cadena.length(); ++i) {
        if (cadena[i] == caracterActual) {
            contador++; 
        } else {
            resultado += caracterActual;
            resultado += to_string(contador);
            caracterActual = cadena[i];
            contador = 1; 
        }
    }
    resultado += caracterActual;
    resultado += to_string(contador);

    return resultado;
}

