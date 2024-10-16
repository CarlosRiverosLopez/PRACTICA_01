// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 8
// Problema planteado:Escribe un programa que alterne entre mayúsculas y minúsculas en una cadena.

#include <iostream>
#include <string>

using namespace std;

string AlternarMayusculasMinusculas(const string& cadena);

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    string resultado = AlternarMayusculasMinusculas(cadena);
    cout << "Cadena alterada: " << resultado << endl;

    return 0;
}

//Funcion de alterarcion de la frase
string AlternarMayusculasMinusculas(const string& cadena) {
    string cadenaAlterada;

    for (size_t i = 0; i < cadena.length(); ++i) {
        char c = cadena[i];

        if (i % 2 == 0) {
            cadenaAlterada += tolower(c); 
        } else {
            cadenaAlterada += toupper(c); 
        }
    }
    return cadenaAlterada;
}