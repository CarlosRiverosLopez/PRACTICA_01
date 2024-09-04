// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 10
// Problema planteado: Leer un número de cuatro dígitos y realizar una función para determinar si al menos dos de los dígitos son iguales.

#include <iostream>
using namespace std;
// Función para determinar si al menos dos dígitos del número son iguales
bool tienenDigitosIguales(int numero) {
    int digito1 = numero / 1000;        
    int digito2 = (numero / 100) % 10;   
    int digito3 = (numero / 10) % 10;    
    int digito4 = numero % 10;           
    return (digito1 == digito2 || digito1 == digito3 || digito1 == digito4 ||
            digito2 == digito3 || digito2 == digito4 ||
            digito3 == digito4);
}
int main() {
    int numero;
    cout << "Ingrese un número de cuatro dígitos: ";
    cin >> numero;
    // Verificar si el número tiene al menos dos dígitos iguales
    if (numero >= 1000 && numero <= 9999) {
        if (tienenDigitosIguales(numero)) {
            cout << "El número tiene al menos dos dígitos iguales." << endl;
        } else {
            cout << "El número no tiene dígitos iguales." << endl;
        }
    } else {
        cout << "El número ingresado no es de cuatro dígitos." << endl;
    }
    return 0;
}