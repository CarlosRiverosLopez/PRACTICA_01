// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 3
// Problema planteado:Escribe un programa que elimine todos los espacios de una cadena.

#include <iostream>
#include <string>

using namespace std;

void QuitarEspacios(string cadena1);

int main(){
    string cadena1;
    cout << "Ingrese la frase:" << endl;
    getline(cin,cadena1);
    QuitarEspacios(cadena1);
    return 0;
}

//Funcion para quitar el espacio en la frase dada
void QuitarEspacios(string cadena1){
    string cadena3;
    for( char cadena2: cadena1){
        if (cadena2 != ' '){
                cadena3 += cadena2;
        }
    }
    cout << cadena3 << endl;
}