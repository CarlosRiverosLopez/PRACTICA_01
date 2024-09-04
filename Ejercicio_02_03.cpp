// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 3
// Problema planteado:Cálculo de la distancia entre dos puntos: Leer las coordenadas de dos puntos en el plano cartesiano y realizar una función para calcular la distancia entre ellos usando la fórmula.

#include <iostream>
#include <cmath> 
using namespace std;
// Función para calcular la distancia entre dos puntos en el plano cartesiano
double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int main() {
    double x1, y1, x2, y2;
    cout << "Ingrese las coordenadas del primer punto (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Ingrese las coordenadas del segundo punto (x2 y2): ";
    cin >> x2 >> y2;
    double distancia = calcularDistancia(x1, y1, x2, y2);
    // Mostrar el resultado
    cout << "La distancia entre los puntos (" << x1 << ", " << y1 << ") y ("
         << x2 << ", " << y2 << ") es: " << distancia << endl;
    return 0;
}