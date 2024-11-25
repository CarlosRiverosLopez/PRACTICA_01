/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 25/11/2024
Número de ejercicio: 6
Problema planteado: Filtrado de registros de temperatura
Descripción: Escribe un programa que lea un archivo de texto llamado
temperaturas.txt, donde cada línea contiene el nombre de una ciudad
seguido de su temperatura promedio del día. El programa debe generar un
archivo altas_temperaturas.txt que solo incluya las ciudades con
temperaturas superiores a N°C. */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void filtrarTemperaturas(const string& archivoEntrada, const string& archivoSalida, double limiteTemperatura) {
    ifstream archivoLeer(archivoEntrada);
    ofstream archivoEscribir(archivoSalida);
    string linea;

    if (archivoLeer.is_open() && archivoEscribir.is_open()) {
        while (getline(archivoLeer, linea)) {
            stringstream ss(linea);
            string ciudad;
            double temperatura;
            ss >> ciudad >> temperatura;

            if (temperatura > limiteTemperatura) {
                archivoEscribir << ciudad << " " << temperatura << endl;
            }
        }
        archivoLeer.close();
        archivoEscribir.close();
    } else {
        cout << "No se pudo abrir uno de los archivos." << endl;
    }
}

int main() {
    string archivoEntrada = "temperaturas.txt";  // Archivo de entrada con las temperaturas
    string archivoSalida = "altas_temperaturas.txt";  // Archivo de salida con las altas temperaturas
    double limiteTemperatura;
    cout << "Ingrese el límite de temperatura (en °C): ";
    cin >> limiteTemperatura;

    // Filtrar las ciudades con temperaturas superiores al límite y guardar en el archivo de salida
    filtrarTemperaturas(archivoEntrada, archivoSalida, limiteTemperatura);

    cout << "El archivo 'altas_temperaturas.txt' ha sido generado con las ciudades que superan los " << limiteTemperatura << "°C." << endl;

    return 0;
}
