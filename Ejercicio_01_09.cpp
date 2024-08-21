// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 9
// Problema planteado: Los primeros 100 numeros primos.
#include <iostream>
using namespace std;
bool a(int e) {
    if (e < 2) return false;
    for (int i = 2; i * i <= e; i++) {
        if (e % i == 0) return false;
    }
    return true;
}
int main() {
    int e = 0;
    int i = 2;
    while (e < 100) {
        if (a(i)) {
            cout << i << " ";
            e++;
        }
        i++;
    }
  cout << endl;
    return 0;
}