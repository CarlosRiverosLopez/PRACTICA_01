/*Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 13
 Problema planteado: Escribe un programa que elimine todos los dígitos de una cadena.
// Entrada: "abc123def456"
// Salida: "abcdef"  */

#include <iostream>
#include <string>

using namespace std;

void eliminarDigitos(const string& entrada, string& salida) {
    for (char c : entrada) {
        if (!isdigit(c)) { // Verifica si el carácter no es un dígito de 0 a 9 
            salida += c; 
        }
    }
}

int main() {
    string entrada;
    string salida;

    cout << "Ingrese una cadena: ";
    getline(cin, entrada); // Permite la entrada de la cadena completa

    eliminarDigitos(entrada, salida); 
    cout << "Salida: " << salida << endl; 

    return 0;
}



