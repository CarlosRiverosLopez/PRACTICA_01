/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 11
 Problema planteado: Escribe un programa que valide si una cadena ingresada cumple con el formato
básico de una dirección de correo electrónico (por ejemplo, contiene exactamente un '@'
y al menos un punto '.' después del '@').
• // Entrada: "usuario@example.com"
• // Salida: "Correo electrónico válido"
• // Entrada: "usuarioexample.com"
• // Salida: "Correo electrónico inválido"   */

#include <iostream>
#include <string>

using namespace std;

bool esCorreoValido(const string& correo) {
    // Verifica que contenga exactamente un '@'
    size_t posicionArroba = correo.find('@');
    if (posicionArroba == string::npos || posicionArroba == 0 || posicionArroba == correo.length() - 1) {
        return false;
    }

    // Verifica que haya al menos un '.' después del '@'
    size_t posicionPunto = correo.find('.', posicionArroba);
    if (posicionPunto == string::npos || posicionPunto == posicionArroba + 1 || posicionPunto == correo.length() - 1) {
        return false;
    }

    return true;
}

int main() {
    string correo;

    cout << "Ingrese una dirección de correo electrónico: ";
    cin >> correo;

    if (esCorreoValido(correo)) {
        cout << "Correo electrónico válido" << endl;
    } else {
        cout << "Correo electrónico inválido" << endl;
    }

    return 0;
}
