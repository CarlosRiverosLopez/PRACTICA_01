// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 10
// Problema planteado:Escribe un programa que, dado el formato comprimido (del ejercicio 15),expanda la cadena al formato original.

#include <iostream>
#include <string>

using namespace std;

string ExpandirCadena(const string& cadenaComprimida);

int main() {
    string cadenaComprimida;
    cout << "Ingrese la cadena comprimida: ";
    getline(cin, cadenaComprimida);

    string resultado = ExpandirCadena(cadenaComprimida);
    cout << "Cadena expandida: " << resultado << endl;

    return 0;
}

//Funcion para expadir la frase
string ExpandirCadena(const string& cadenaComprimida) {
    string resultado;
    size_t i = 0;

    while (i < cadenaComprimida.length()) {
        char caracterActual = cadenaComprimida[i];
        i++;

        string numero;
        while (i < cadenaComprimida.length() && isdigit(cadenaComprimida[i])) {
            numero += cadenaComprimida[i];
            i++;
        }
        int frecuencia = stoi(numero);
        resultado.append(frecuencia, caracterActual);
    }

    return resultado;
}
