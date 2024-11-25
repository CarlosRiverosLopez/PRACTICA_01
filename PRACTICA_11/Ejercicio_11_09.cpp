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

using namespace std;

// Función para cifrar el texto usando el cifrado César con desplazamiento de 3
char cifrarCaracter(char c, int desplazamiento) {
    if (isalpha(c)) {
        // Verificamos si el carácter es una letra mayúscula o minúscula
        char base = (isupper(c)) ? 'A' : 'a';
        return (c - base + desplazamiento) % 26 + base; 
    }
    return c; 
}

// Función para cifrar el contenido de un archivo
void cifrarArchivo(const string& archivoEntrada, const string& archivoSalida, int desplazamiento) {
    ifstream archivoLeer(archivoEntrada);
    ofstream archivoEscribir(archivoSalida);
    string linea;

    if (archivoLeer.is_open() && archivoEscribir.is_open()) {
        while (getline(archivoLeer, linea)) {
            for (char& c : linea) {
                c = cifrarCaracter(c, desplazamiento);  
            }
            archivoEscribir << linea << endl; 
        }
        archivoLeer.close();
        archivoEscribir.close();
        cout << "El archivo cifrado se ha guardado en: " << archivoSalida << endl;
    } else {
        cout << "No se pudo abrir uno de los archivos." << endl;
    }
}
