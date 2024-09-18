// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/09/2024
// Número de ejercicio: 8
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales, y otro contiene los nombres de estos minerales, para obtener: - Buscar por nombre de mineral y desplegar la producción - Ordenar del mayor al menor (producción) y mostrar: Mineral Produccion ™ SN 998.000; SB 876.500; AU 786.670; PT 636.143; AG 135.567; CU 109.412.

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

const int NUM_MINERALES = 6;
const string minerales[NUM_MINERALES] = {"SN", "SB", "AU", "PT", "AG", "CU"};
const double produccion[NUM_MINERALES] = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};

void buscarProduccionPorNombre(const string& nombre) {
    bool encontrado = false;
    for (int i = 0; i < NUM_MINERALES; i++) {
        if (minerales[i] == nombre) {
            cout << "Producción del mineral " << nombre << ": " << fixed << setprecision(3) << produccion[i] << " ™" << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "El mineral " << nombre << " no se encontró en el sistema." << endl;
    }
}

// Función para ordenar las producciones de mayor a menor y mostrar los resultados
void ordenarYMostrarProduccion() {
    
    int indices[NUM_MINERALES];
    for (int i = 0; i < NUM_MINERALES; i++) {
        indices[i] = i; 
    }

    sort(indices, indices + NUM_MINERALES, [](int a, int b) {
        return produccion[a] > produccion[b];
    });

    cout << "\nMineral   Producción (™)\n";
    for (int i = 0; i < NUM_MINERALES; i++) {
        cout << minerales[indices[i]] << "        " << fixed << setprecision(3) << produccion[indices[i]] << endl;
    }
}

int main() {
    string nombreMineral;
    cout << "Introduce el nombre del mineral (Ej. SN, SB, AU, etc.): ";
    cin >> nombreMineral;
    buscarProduccionPorNombre(nombreMineral);
    ordenarYMostrarProduccion();
    return 0;
}
