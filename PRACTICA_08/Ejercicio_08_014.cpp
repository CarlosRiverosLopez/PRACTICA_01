/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 14
 Problema planteado: Escribe un programa que divida una cadena en tokens (subcadenas) separadas por un
delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas  */

#include <iostream>
#include <string>

using namespace std;

void dividirCadena(const string& entrada, char delimitador) {
    size_t inicio = 0; // Posición inicial para buscar el siguiente token
    size_t posicion;

    while ((posicion = entrada.find(delimitador, inicio)) != string::npos) {
        // Extraer el token entre 'inicio' y 'posicion'
        string token = entrada.substr(inicio, posicion - inicio);
        cout << token << endl; 
        inicio = posicion + 1; 
    }

    // Imprimir el último token (o lo que queda de la cadena)
    cout << entrada.substr(inicio) << endl;
}

int main() {
    string entrada;
    char delimitador;

    cout << "Ingrese una cadena: ";
    getline(cin, entrada); 

    cout << "Ingrese el delimitador: ";
    cin >> delimitador; 

    dividirCadena(entrada, delimitador); 

    return 0;
}

