// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 19/09/2024
// Número de ejercicio: 3
// Problema planteado: Leer una cantidad de segundos y convertirla en un formato de horas, minutos y segundos (HH:MM:SS).
#include <iostream>

using namespace std;
// Funcion para poder convertir a segundos
void ConvertirSegundos (int segundos)
{
    int horas = segundos/ 3600;
    int minutos = (segundos % 3600)/60;
    int segundosrestan = segundos % 60;
    cout << "Segundos convertidos son:" << endl;
    cout << "Horas:" << horas << endl;
    cout << "Minutos:" << minutos << endl;
    cout << "Segundos restantes:" << segundosrestan << endl;
    cout << "En el formato:" << endl;
    cout << horas << ":" << minutos << ":" << segundosrestan;
}

int main(){
    int segundos = 0;
    cout << "Ingrese los segundos que quiera transformar" << endl;
    cin >> segundos;
    ConvertirSegundos (segundos);
    
    return 0;
}