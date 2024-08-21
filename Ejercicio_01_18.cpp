// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 19
// Problema planteado: Numero de Armstrong.
#include <iostream>
#include <cmath>
using namespace std;

bool esNumeroArmstrong(int n) {
    int o = n;
    int s = 0;
    int d = 0;
    int t = n;
    while (t > 0) {
        d++;
        t /= 10;
    }
    t = n;
    while (t > 0) {
        int r = t % 10;
        s += pow(r, d);
        t /= 10;
    }
    return s == o;
}
int main() {
    int n;
    cout << "Ingresa un número entero: ";
    cin >> n;
    if (esNumeroArmstrong(n)) {
        cout << n << " es un número de Armstrong." << endl;
    } else {
        cout << n << " no es un número de Armstrong." << endl;
    }
    return 0;
}