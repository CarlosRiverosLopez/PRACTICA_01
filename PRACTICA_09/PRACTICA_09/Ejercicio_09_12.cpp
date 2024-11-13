/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 12
Problema planteado: Realizar un algoritmo recursivo que nos diga si una cadena de caracteres
es simétrica  */

#include <iostream>
#include <string>

using namespace std;


bool esSimetrica(const string& cadena, int inicio, int fin) {
    
    if (inicio >= fin) {  // Si la subcadena tiene 0 o 1 caracteres, es simétrica
        return true;
    }
    
    if (cadena[inicio] != cadena[fin]) {  // Si los caracteres en las posiciones 'inicio' y 'fin' no coinciden, no es simétrica
        return false;
    }

    return esSimetrica(cadena, inicio + 1, fin - 1);
}

int main() {
    string cadena;

    cout << "Introduce una cadena de caracteres: ";
    cin >> cadena;

    if (esSimetrica(cadena, 0, cadena.length() - 1)) {
        cout << "La cadena es simétrica." << endl;
    } else {
        cout << "La cadena no es simétrica." << endl;
    }

    return 0;
}
