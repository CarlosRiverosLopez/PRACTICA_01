// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 04/10/2024
// Número de ejercicio: 5
// Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N

#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B, int N, int M) {
    vector<vector<int>> C(N, vector<int>(N, 0));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < M; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

void mostrarMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            cout << valor << "\t";
        }
        cout << endl;
    }
}

int main() {
    int N, M;

    // Ingreso de dimensiones de las matrices
    cout << "Ingrese el número de filas de la matriz A (N): ";
    cin >> N;
    cout << "Ingrese el número de columnas de la matriz A (M): ";
    cin >> M;

    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(M, vector<int>(N));

    // Llenar la matriz A
    cout << "Ingrese los elementos de la matriz A (" << N << " x " << M << "):" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Llenar la matriz B
    cout << "Ingrese los elementos de la matriz B (" << M << " x " << N << "):" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    vector<vector<int>> C = multiplicarMatrices(A, B, N, M);

    // Mostrar la matriz resultante C
    cout << "Matriz resultante C (A * B):" << endl;
    mostrarMatriz(C);

    return 0;
}

