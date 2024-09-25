// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 19/09/2024
// Número de ejercicio: 1
// Problema planteado:Leer el monto del préstamo, la tasa de interés anual y el número de años para pagar y calcular el pago mensual de un préstamo usando la fórmula de amortización.
#include <iostream>

#include <cmath> 

using namespace std;

// Función para calcular el pago mensual usando la fórmula de amortización
double calcularPagoMensual(double montoPrestamo, double tasaInteresAnual, int anios) {
    double tasaInteresMensual = tasaInteresAnual / 12 / 100; 
    int totalPagos = anios * 12; 
    
    // Aplicar la fórmula de amortización
    double pagoMensual = (montoPrestamo * tasaInteresMensual * pow(1 + tasaInteresMensual, totalPagos)) /
                         (pow(1 + tasaInteresMensual, totalPagos) - 1);
    
    return pagoMensual;
}

int main() {
    double montoPrestamo, tasaInteresAnual;
    int anios;

    cout << "Ingrese el monto del préstamo: ";
    cin >> montoPrestamo;
    cout << "Ingrese la tasa de interés anual (en porcentaje): ";
    cin >> tasaInteresAnual;
    cout << "Ingrese el número de años para pagar: ";
    cin >> anios;

    double pagoMensual = calcularPagoMensual(montoPrestamo, tasaInteresAnual, anios);

    cout << "El pago mensual del préstamo es: " << pagoMensual << endl;
    
    return 0;
}
