// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/10/2024
// Número de ejercicio: 1
// Problema planteado: Escribe un programa que tome una cadena de entrada y la invierta.

#include <iostream> 
#include <string>

using namespace std;

void invertir(string cadena1);

int main(){
    string cadena1;
    cout << "Ingrese la frase que se invertira:" << endl;
    getline(cin,cadena1);
    invertir(cadena1);
    return 0;
}

//Funcion para dar la vuelta la frase dada
void invertir(string cadena1 ){
    string cadena1invertida;
    for (int i = cadena1.length() -1; i>= 0;--i){
        cadena1invertida += cadena1[i];
    }
    cout << "Frase invertida:" << endl;
    cout << cadena1invertida;
}