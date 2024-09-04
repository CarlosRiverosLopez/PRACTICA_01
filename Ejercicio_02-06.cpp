// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 6
// Problema planteado:Leer una hora (en formato de 24 horas) y realizar una función para determinar si corresponde a la mañana, tarde, noche o madrugada.

#include <iostream>
using namespace std;
// Función para determinar la parte del día en función de la hora
string parteDelDia(int hora) {
    if (hora >= 0 && hora < 6) {
        return "Madrugada";
    } else if (hora >= 6 && hora < 12) {
        return "Mañana";
    } else if (hora >= 12 && hora < 18) {
        return "Tarde";
    } else if (hora >= 18 && hora < 24) {
        return "Noche";
    } else {
        return "Hora inválida"; 
    }
}
int main() {
    int hora;
    cout << "Ingrese la hora (en formato de 24 horas): ";
    cin >> hora;
    string parte = parteDelDia(hora);
    cout << "La hora " << hora << ":00 corresponde a la parte del día: " << parte << endl;
    return 0;
}
