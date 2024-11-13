/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 7
Problema planteado: Realizar un algoritmo para generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38,
49,..., para n términos  */

#include <iostream>
#include <vector>

using namespace std;

void generarSecuencia(int n, vector<int>& secuencia, int indice) {
    if (indice == n) {
        return;
    }

    if (indice < 5) {
        secuencia.push_back(1 << indice);  // 1 << i es equivalente a 2^i
    }
    // Caso para términos a partir del sexto (incrementos crecientes)
    else {
       
        int diferencia = (indice - 4) * 5 + 5;  // La diferencia va creciendo
        secuencia.push_back(secuencia[indice - 1] + diferencia);
    }

    generarSecuencia(n, secuencia, indice + 1);
}

int main() {
    int n;

    cout << "Introduce el número de términos: ";
    cin >> n;

    if (n <= 0) {
        cout << "El número de términos debe ser mayor que 0." << endl;
        return 1;
    }

    vector<int> secuencia;

    generarSecuencia(n, secuencia, 0);
    
    cout << "La secuencia es: ";
    for (int i = 0; i < secuencia.size(); ++i) {
        cout << secuencia[i] << " ";
    }
    cout << endl;

    return 0;
}
