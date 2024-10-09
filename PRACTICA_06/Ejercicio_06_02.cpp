// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 04/10/2024
// Número de ejercicio: 2
// Problema planteado:Generar una matriz de N x N con números al azar entre A y B, y determinar: • La suma de la última columna • El producto total de la última fila • Obtener el mayor valor y su posición • Obtener la desviación estándar de todos los elementos de la matriz

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <limits>

using namespace std;

// Función para generar una matriz N x N con números aleatorios entre A y B
vector<vector<int>> generarMatriz(int N, int A, int B) {
    vector<vector<int>> matriz(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matriz[i][j] = rand() % (B - A + 1) + A;
        }
    }
    return matriz;
}

int sumaUltimaColumna(const vector<vector<int>>& matriz) {
    int suma = 0;
    for (int i = 0; i < matriz.size(); ++i) {
        suma += matriz[i][matriz.size() - 1];
    }
    return suma;
}

int productoUltimaFila(const vector<vector<int>>& matriz) {
    int producto = 1;
    for (int j = 0; j < matriz.size(); ++j) {
        producto *= matriz[matriz.size() - 1][j];
    }
    return producto;
}


pair<int, pair<int, int>> mayorValor(const vector<vector<int>>& matriz) {
    int mayor = numeric_limits<int>::min();
    pair<int, int> posicion;
    for (int i = 0; i < matriz.size(); ++i) {
        for (int j = 0; j < matriz.size(); ++j) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                posicion = {i, j};
            }
        }
    }
    return {mayor, posicion};
}

// Función para calcular la desviación estándar
double desviacionEstandar(const vector<vector<int>>& matriz) {
    double suma = 0.0;
    double sumaCuadrados = 0.0;
    int totalElementos = matriz.size() * matriz.size();
    
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            suma += valor;
            sumaCuadrados += valor * valor;
        }
    }
    
    double media = suma / totalElementos;
    return sqrt((sumaCuadrados / totalElementos) - (media * media));
}

int main() {
    srand(static_cast<unsigned>(time(0))); 
    int N, A, B;
    cout << "Ingrese el tamaño de la matriz (N): ";
    cin >> N;
    cout << "Ingrese el valor mínimo (A): ";
    cin >> A;
    cout << "Ingrese el valor máximo (B): ";
    cin >> B;

    vector<vector<int>> matriz = generarMatriz(N, A, B);

    cout << "Matriz generada:" << endl;
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            cout << valor << "\t";
        }
        cout << endl;
    }

    // Calcular y mostrar los resultados
    cout << "Suma de la última columna: " << sumaUltimaColumna(matriz) << endl;

    cout << "Producto de la última fila: " << productoUltimaFila(matriz) << endl;

    auto [mayor, posicion] = mayorValor(matriz);
    cout << "Mayor valor: " << mayor << " en posición (" << posicion.first << ", " << posicion.second << ")" << endl;

    cout << "Desviación estándar: " << desviacionEstandar(matriz) << endl;

    return 0;
}
