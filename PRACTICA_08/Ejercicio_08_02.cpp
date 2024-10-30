/* Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 2
 Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y
otro contiene los nombres de estos minerales, para obtener:
- Buscar por nombre de mineral y desplegar la producción
- Ordenar del mayor al menor (producción) y mostrar:   */

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Estructura de almacenamiento
struct Mineral {
    string nombre;
    float produccion;
};

// Función para buscar la producción de un mineral
void buscarProduccion(const vector<Mineral>& minerales, const string& nombre) {
    for (const auto& mineral : minerales) {
        if (mineral.nombre == nombre) {
            cout << "Producción de " << nombre << ": " << fixed << setprecision(3) << mineral.produccion << " toneladas métricas." << endl;
            return;
        }
    }
    cout << "Mineral no encontrado." << endl;
}

// Función para ordenar y mostrar los minerales por producción
void mostrarProduccionOrdenada(vector<Mineral>& minerales) {
    // Ordenar de mayor a menor
    sort(minerales.begin(), minerales.end(), [](const Mineral& a, const Mineral& b) {
        return a.produccion > b.produccion;
    });

    cout << "\nMineral Producción (tm)" << endl;
    for (const auto& mineral : minerales) {
        cout << mineral.nombre << " " << fixed << setprecision(3) << mineral.produccion << endl;
    }
}

int main() {

    vector<Mineral> minerales = {
        {"SN", 998.000},
        {"SB", 876.500},
        {"AU", 786.670},
        {"PT", 636.143},
        {"AG", 135.567},
        {"CU", 109.412}
    };

    
    string nombreBuscar;
    cout << "Ingrese el nombre del mineral a buscar: ";
    cin >> nombreBuscar;
    buscarProduccion(minerales, nombreBuscar);

   
    mostrarProduccionOrdenada(minerales);

    return 0;
}