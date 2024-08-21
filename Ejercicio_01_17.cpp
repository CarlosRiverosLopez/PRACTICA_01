// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 17
// Problema planteado: Decimal a Binario.
#include <iostream>
using namespace std;

int main() {
    int dec;
    string binario = "";
    cout << "Ingresa un número entero decimal: ";
    cin >> dec;
    if (dec == 0) {
        binario = "0";
    } else {
        while (dec > 0) {
            int residuo = dec % 2;
            binario = to_string(residuo) + binario;  
            dec/= 2;
        }
    }
    cout << "El número en binario es: " << binario << endl;
    return 0;
}