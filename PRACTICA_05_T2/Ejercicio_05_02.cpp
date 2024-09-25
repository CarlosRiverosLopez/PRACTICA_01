// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 19/09/2024
// Número de ejercicio: 2
// Problema planteado: Cálculo de la edad exacta: Leer la fecha de nacimiento de una persona (día, mes, año) y calcular su edad exacta en años, meses y días considerando la fecha actual.
#include <iostream>

using namespace std;

bool esBisiesto(int anio) {
    return ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
}

// Función para calcular los días en un mes específico
int diasEnMes(int mes, int anio) {
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (mes == 2 && esBisiesto(anio)) {
        return 29;  // Febrero tiene 29 días si es un año bisiesto
    }
    return dias[mes - 1];
}

// Función para calcular la edad exacta en años, meses y días
void calcularEdad(int diaNac, int mesNac, int anioNac, int diaActual, int mesActual, int anioActual, 
                  int &anios, int &meses, int &dias) {
    anios = anioActual - anioNac;
    meses = mesActual - mesNac;
    dias = diaActual - diaNac;
    if (dias < 0) {
        meses--;
        dias += diasEnMes((mesActual == 1) ? 12 : mesActual - 1, anioActual);
    }
    
    if (meses < 0) {
        anios--;
        meses += 12;
    }
}

int main() {
    int diaNac, mesNac, anioNac , diaActual, mesActual, anioActual, anios, meses, dias;
    
    // Entrada de la fecha de nacimiento
    cout << "Ingrese el día de nacimiento: ";
    cin >> diaNac;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNac;
    cout << "Ingrese el año de nacimiento: ";
    cin >> anioNac;
    
    // Entrada de la fecha actual
    cout << "Ingrese el día actual: ";
    cin >> diaActual;
    cout << "Ingrese el mes actual: ";
    cin >> mesActual;
    cout << "Ingrese el año actual: ";
    cin >> anioActual;
    
    // Llamada a la función para calcular la edad exacta
    calcularEdad(diaNac, mesNac, anioNac, diaActual, mesActual, anioActual, anios, meses, dias);
    
    // Mostrar la edad exacta
    cout << "Edad exacta: " << anios << " años, " << meses << " meses y " << dias << " días." << endl;
    
    return 0;
    
}