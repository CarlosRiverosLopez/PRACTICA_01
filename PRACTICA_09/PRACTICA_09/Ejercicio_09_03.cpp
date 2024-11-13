/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 3
Problema planteado:  Crea una función recursiva que reciba una cadena y devuelva la misma
cadena invertida. Por ejemplo, si la cadena es "recursión", la función debe
devolver "nóisrucre". La recursión debe trabajar sobre subcadenas hasta
que el proceso esté completo. */

#include <iostream>
#include <string>
using namespace std;

string invertirCadena(const string& cad);

int main() {
    string cadena;
    
    cout << "Introduce una cadena: ";
    getline(cin, cadena);

    string resultado = invertirCadena(cadena);
    cout << "La cadena invertida es: " << resultado << endl;

    return 0;
}

string invertirCadena(const string& cad) {

    if (cad.empty()) {   // Si la cadena está vacía, retornamos la cadena vacía
        return "";
    }

    return invertirCadena(cad.substr(1)) + cad[0];  // Llamada recursiva: Invertimos el resto de la cadena y agregamos el primer carácter al final
}
