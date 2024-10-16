// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 11
// Problema planteado: Escribe un programa que elimine todos los dígitos de una cadena.

#include <iostream>
#include <string>

using namespace std;

string EliminarDigitos(const string& cadena);

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    string resultado = EliminarDigitos(cadena);
    cout << "Cadena sin dígitos: " << resultado << endl;
    return 0;
}

//Funcion de eliminar los numeros
string EliminarDigitos(const string& cadena) {
    string resultado;
    for (char c : cadena) {
        if (!isdigit(c)) { 
            resultado += c; 
        }
    }
    return resultado;
}
