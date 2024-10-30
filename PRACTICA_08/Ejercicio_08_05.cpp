/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 5
 Problema planteado: Crea un programa que permita al usuario ingresar N números en un vector y luego rota
el vector k posiciones a la derecha. Muestra el vector después de la rotación. */

#include <iostream>
#include <vector>

using namespace std;

// Función para rotar el vector k posiciones a la derecha
void rotarDerecha(vector<int>& numeros, int k) {
    int n = numeros.size();
    k = k % n; // Asegurarse de que k no sea mayor que n

    vector<int> resultado(n);
    
    for (int i = 0; i < k; i++) {
        resultado[i] = numeros[n - k + i];
    }

    for (int i = 0; i < n - k; i++) {
        resultado[k + i] = numeros[i];
    }
    numeros = resultado;
}

int main() {
    int N, k;

    cout << "¿Cuántos números desea ingresar? ";
    cin >> N;

    vector<int> numeros(N);
    
    cout << "Ingrese " << N << " números:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numeros[i];
    }

    cout << "¿Cuántas posiciones desea rotar a la derecha? ";
    cin >> k;

    rotarDerecha(numeros, k);

    // Mostrar el vector resultante
    cout << "Vector después de la rotación: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}



