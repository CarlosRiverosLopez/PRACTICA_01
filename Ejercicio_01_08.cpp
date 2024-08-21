// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 21/08/2024
// Número de ejercicio: 8
// Problema planteado: Detecte una vocal o una consonante.
#include <iostream>
using namespace std;
int main() {
    char letra;
    cout << "Ingresa una letra: ";
    cin >> letra;
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        letra = tolower(letra);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
         cout << "Es una vocal" << endl;
        } else {
         cout << "Es una consonante" << endl;
        }
    } else {
        cout << "Es un carácter especial" << endl;
    }
    return 0;
}