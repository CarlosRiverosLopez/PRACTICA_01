// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 7
// Problema planteado: Escribe un programa que cuente la frecuencia de cada carácter en una cadena.

#include <iostream>
#include <string>
#include <unordered_map> // biblioteca para usar unordered_map

using namespace std;

void ContarFrecuencia(const string& cadena);

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    ContarFrecuencia(cadena);
    
    return 0;
}

//Funcion para contar la frecuencia 
void ContarFrecuencia(const string& cadena) {
    unordered_map<char, int> frecuencia; 

    for (char c : cadena) {
        frecuencia[c]++;
    }

    cout << "Frecuencia de caracteres:" << endl;
    for (const auto& par : frecuencia) {
        cout << "'" << par.first << "' : " << par.second << endl;
    }
}
