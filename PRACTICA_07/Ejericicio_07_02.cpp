// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 2
// Problema planteado:Escribe un programa que cuente el número de vocales (a, e, i, o, u) en una cadena dada.

#include <iostream>
#include <string>

using namespace std;

void SumaVocales(string cadena1);

int main(){
    string cadena1;
    cout << "Ingrese una frase:" << endl;
    getline(cin, cadena1);
    SumaVocales(cadena1);
    return 0;
}

//Hacemos la funcion de suma de vocales 
void SumaVocales(string cadena1){
    int vocales = 0;
    for (char c: cadena1){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            vocales++;
        }
    }
    cout << "Numeros de vocales es:" << vocales << endl;
}