// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 1
// Problema planteado: Leer una cantidad de segundos y realizar una función para convertirla a horas, minutos y segundos.

#include <iostream>
using namespace std;
// Función para convertir segundos a horas, minutos y segundos
void covertirSegundos(int segundos, int &horas, int &minutos){
    horas = segundos / 3600;
    minutos = segundos / 60; 
}
int main() {
    int segundos, horas, minutos;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;
    // Llamar a la función para convertir segundos
    covertirSegundos(segundos, horas, minutos);
    // Mostrar el resultado
    cout << "El equivalente en horas, minutos y segundos es:" << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;
    return 0;
}