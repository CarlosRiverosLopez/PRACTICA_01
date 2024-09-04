// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 5
// Problema planteado: Leer un año y un mes (como número) y realizar una función para determinar cuántos días tiene ese mes considerando si el año es bisiesto.

#include <iostream>
using namespace std;
// Función para determinar si un año es bisiesto
bool esBisiesto(int año) {
    return (año % 4 == 0 && (año % 100 != 0 || año % 400 == 0));
}
int diasEnMes(int mes, int año) {
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && esBisiesto(año)) {
        return 29;
    }
     if (mes >= 1 && mes <= 12) {
        return diasPorMes[mes - 1];
    } else {
        return -1;
    }
}
int main() {
    int año, mes;
    cout << "Ingrese el año: ";
    cin >> año;
    cout << "Ingrese el mes (como número): ";
    cin >> mes;
    int dias = diasEnMes(mes, año);
    if (dias == -1) {
        cout << "El mes ingresado no es válido." << endl;
    } else {
        cout << "El mes " << mes << " del año " << año << " tiene " << dias << " días." << endl;
    }
    return 0;
}
