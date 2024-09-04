// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 4
// Problema planteado:Leer tres números enteros y realizar una función para determinar si pueden formar un triángulo rectángulo (aplicar el teorema de Pitágoras)

#include <iostream>
#include <algorithm> 
#include <math.h>
using namespace std;
// Función para verificar si los tres números pueden formar un triángulo rectángulo
bool TrianguloRectangulo(int a, int b, int c) {
    int lados[] = {a, b, c};
    sort(lados, lados + 3);
    int hipotenusa = lados[2];
    int cateto1 = lados[0];
    int cateto2 = lados[1];
    return (pow(hipotenusa, 2) == pow(cateto1, 2) + pow(cateto2, 2));
}
int main() {
    int a, b, c;
    cout << "Ingrese el primer número: ";
    cin >> a;
    cout << "Ingrese el segundo número: ";
    cin >> b;
    cout << "Ingrese el tercer número: ";
    cin >> c;
    if (TrianguloRectangulo(a, b, c)) {
        cout << "Los números pueden formar un triángulo rectángulo." << endl;
    } else {
        cout << "Los números no pueden formar un triángulo rectángulo." << endl;
    }
    return 0;
}
