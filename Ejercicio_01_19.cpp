// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 12
// Problema planteado: Dias, horas, minutos y segundos.
#include <iostream>
using namespace std;

int convertirASegundos(int d, int h, int m, int s) {
    return d * 86400 + h * 3600 + m * 60 + s;
}
int main() {
    int dias, horas, minutos, segundos;
    cout << "Ingresa el número de días: ";
    cin >> dias;
    cout << "Ingresa el número de horas: ";
    cin >> horas;
    cout << "Ingresa el número de minutos: ";
    cin >> minutos;
    cout << "Ingresa el número de segundos: ";
    cin >> segundos;
    int totalSegundos = convertirASegundos(dias, horas, minutos, segundos);
    cout << "El total en segundos es: " << totalSegundos << endl;
    return 0;
}
