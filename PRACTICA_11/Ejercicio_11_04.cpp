/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 25/11/2024
Número de ejercicio: 4
Problema planteado: Búsqueda de texto en un archivo
Descripción: Escribe un programa que lea un archivo de texto llamado
datos.txt y permita al usuario buscar una palabra o frase específica. El
programa debe contar y mostrar cuántas veces aparece esa palabra o frase
en el archivo. */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Función para buscar una palabra o frase en el archivo y contar cuántas veces aparece
int buscarPalabraEnArchivo(const string& archivoNombre, const string& palabraBuscar) {
    ifstream archivo(archivoNombre);
    string linea;
    int contador = 0;

    if (archivo.is_open()) {
        
        while (getline(archivo, linea)) {
            size_t pos = 0;

            while ((pos = linea.find(palabraBuscar, pos)) != string::npos) {
                contador++;  
                pos += palabraBuscar.length();  
            }
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo para leer." << endl;
    }

    return contador;
}

int main() {
    string archivoNombre = "datos.txt"; 
    string palabraBuscar;

    cout << "Ingrese la palabra o frase a buscar en el archivo: ";
    getline(cin, palabraBuscar);
    int resultado = buscarPalabraEnArchivo(archivoNombre, palabraBuscar);

    if (resultado > 0) {
        cout << "La palabra o frase \"" << palabraBuscar << "\" aparece " << resultado << " vez/veces en el archivo." << endl;
    } else {
        cout << "La palabra o frase \"" << palabraBuscar << "\" no se encontró en el archivo." << endl;
    }

    return 0;
}
