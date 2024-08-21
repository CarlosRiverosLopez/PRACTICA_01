// Materia: Programación I, Paralelo 1
// Autor:Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 10
// Problema planteado: Cantidad de digitos en enteros.
#include <iostream>
using namespace std;
int main() {
    int num, c = 0;
    cout << "Ingresa un número entero: ";
    cin >> num;
    if (num == 0) {
        c = 1;
    } else {
        while (num != 0) {
            num /= 10;
            c++;
 }
  } 
    cout << "El número tiene " << c << " dígitos." << endl;
    return 0;
}