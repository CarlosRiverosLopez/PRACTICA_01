// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 05/09/2024
// Número de ejercicio: 5
// Problema planteado: Simular el lanzamiento de una moneda n veces y determinar el porcentaje de caras y el porcentaje de sellos.

#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

// Función para simular el lanzamiento de la moneda
void lanzarMoneda(int n) {
    int caras = 0, sellos = 0;
    srand(time(0));

    // Realizamos n lanzamientos
    for (int i = 0; i < n; i++) {
        int resultado = rand() % 2;  
        if (resultado == 0) {
            caras++;
        } else {
            sellos++;
        }
    }
    double porcentajeCaras = (static_cast<double>(caras) / n) * 100;
    double porcentajeSellos = (static_cast<double>(sellos) / n) * 100;
    cout << "Resultados después de " << n << " lanzamientos:" << endl;
    cout << "Caras: " << porcentajeCaras << "%" << endl;
    cout << "Sellos: " << porcentajeSellos << "%" << endl;
}
int main() {
    int n;
    cout << "Ingrese el número de lanzamientos: ";
    cin >> n;
    lanzarMoneda(n);
    return 0;
}



