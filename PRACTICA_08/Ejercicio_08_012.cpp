/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 12
 Problema planteado: Escribe un programa que invierta el orden de las palabras en una oración sin cambiar
el orden de los caracteres dentro de cada palabra.
• // Entrada: "Hola mundo desde C++"
• // Salida: "C++ desde mundo Hola" */

#include <iostream>
#include <string>

using namespace std;

void invertirPalabras(const string& oracion, string& resultado) {
    string palabra;

    // Recorrer la oración desde el final hacia el principio
    for (int i = oracion.length() - 1; i >= 0; --i) {
        if (oracion[i] == ' ') {
            // Si encontramos un espacio, añadimos la palabra encontrada al resultado
            if (!palabra.empty()) {
                if (!resultado.empty()) {
                    resultado += ' '; // Añadir espacio antes de la palabra
                }
                resultado += palabra; 
                palabra.clear(); // Limpiar la palabra
            }
        } else {
            // Añadir caracteres a la palabra
            palabra = oracion[i] + palabra;
        }
    }

    // Añadir la última palabra si existe
    if (!palabra.empty()) {
        if (!resultado.empty()) {
            resultado += ' ';
        }
        resultado += palabra;
    }
}

int main() {
    string oracion;
    string resultado;

    cout << "Ingrese una oración: ";
    getline(cin, oracion); // Permite espacios en la entrada

    invertirPalabras(oracion, resultado); // Llama a la función para invertir palabras

    cout << "Salida: " << resultado << endl;

    return 0;
}
