/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 25/11/2024
Número de ejercicio: 9
Problema planteado: Cifrado de un archivo de texto (Cifrado César)
Descripción: Escribe un programa que lea un archivo mensaje.txt, realice
un cifrado César con un desplazamiento de 3 sobre el texto y guarde el
resultado en un archivo mensaje_cifrado.txt. El cifrado César desplaza cada
letra por un número fijo de posiciones en el alfabeto (por ejemplo, A se
convierte en D, B en E, etc.). */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void contarContenidoArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    string linea;
    int numLineas = 0, numPalabras = 0, numCaracteres = 0;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            numLineas++;  
            numCaracteres += linea.length();  // Sumamos la cantidad de caracteres de la línea

            // Usamos un stringstream para contar las palabras en la línea
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
