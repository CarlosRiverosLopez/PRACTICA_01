/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 25/11/2024
Número de ejercicio: 8
Problema planteado: Contador de líneas, palabras y caracteres
Descripción: Escribe un programa que lea un archivo de texto llamado
documento.txt y cuente el número total de líneas, palabras y caracteres. Al
final, el programa debe mostrar estos totales en la consola. */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Función para contar líneas, palabras y caracteres en un archivo
void contarContenidoArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    string linea;
    int numLineas = 0, numPalabras = 0, numCaracteres = 0;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            numLineas++;  
            numCaracteres += linea.length();  
            stringstream ss(linea);
            string palabra;
            while (ss >> palabra) {
                numPalabras++;  
            }
        }
        archivo.close();
        cout << "Número total de líneas: " << numLineas << endl;
        cout << "Número total de palabras: " << numPalabras << endl;
        cout << "Número total de caracteres: " << numCaracteres << endl;
    } else {
        cout << "No se pudo abrir el archivo: " << nombreArchivo << endl;
    }
}

int main() {
    string archivo = "documento.txt";  
    contarContenidoArchivo(archivo);

    return 0;
}
