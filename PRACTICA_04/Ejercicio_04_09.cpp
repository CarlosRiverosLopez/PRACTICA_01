// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/09/2024
// Número de ejercicio: 9
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de este arreglo determine la desviación típica.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Función para ingresar las edades en un vector
void ingresarEdades(vector<int>& edades) {
    int edad;
    cout << "Introduce las edades (ingresa -1 para terminar):\n";
    while (true) {
        cin >> edad;
        if (edad == -1) {
            break;  
        }
        edades.push_back(edad);
    }
}

double calcularPromedio(const vector<int>& edades) {
    double suma = 0;
    for (int edad : edades) {
        suma += edad;
    }
    return suma / edades.size();
}

// Función para calcular la desviación típica
double calcularDesviacionTipica(const vector<int>& edades, double promedio) {
    double sumaDesviacionesCuadradas = 0;
    for (int edad : edades) {
        sumaDesviacionesCuadradas += pow(edad - promedio, 2);
    }
    return sqrt(sumaDesviacionesCuadradas / edades.size());
}

int main() {
    vector<int> edades;
    ingresarEdades(edades);

    if (edades.empty()) {
        cout << "No se ingresaron edades.\n";
        return 0;
    }

    double promedio = calcularPromedio(edades);
    cout << "Promedio de edades: " << promedio << endl;

    double desviacionTipica = calcularDesviacionTipica(edades, promedio);
    cout << "Desviación típica de las edades: " << desviacionTipica << endl;
    return 0;
}
