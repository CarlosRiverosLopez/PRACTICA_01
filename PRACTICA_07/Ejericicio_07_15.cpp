// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 15
// Problema planteado: Escribe un programa que valide si una cadena ingresada cumple con el formato básico de una dirección de correo electrónico (por ejemplo, contiene exactamente un '@' y al menos un punto '.' después del '@').

#include <iostream>
#include <string>

using namespace std;

bool ValidarEmail(const string& email);

int main() {
    string email;
    cout << "Ingrese una dirección de correo electrónico: ";
    getline(cin, email);

    if (ValidarEmail(email)) {
        cout << "La dirección de correo electrónico es válida." << endl;
    } else {
        cout << "La dirección de correo electrónico no es válida." << endl;
    }

    return 0;
}

//Funcion para validar su emil
bool ValidarEmail(const string& email) {
    size_t atPos = email.find('@');
    if (atPos == string::npos || atPos == 0 || atPos == email.length() - 1) {
        return false;
    }
    // Buscar un punto después del '@'
    size_t dotPos = email.find('.', atPos);
    if (dotPos == string::npos || dotPos == email.length() - 1) {
        return false;
    }
    return true;
}
