// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/09/2024
// Número de ejercicio: 2
// Problema planteado: Escriba un programa para introducir los siguientes valores en un arreglo nombrado voltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. Después que se hayan introducido los datos, haga que su programa despliegue los valores. 11.95 16.32 12.15; 8.22 15.98 26.22; 13.54 6.45 17.59

#include <iostream>
#include <vector>
using namespace std;

int main (){
    double voltios[9] =  {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    int i = 0;
    // introducimos la funcion while
    while(i < 9){
        int j  = 0;
        while (j < 3){
            cout << voltios[i] << "\t";
            i++;
            j++;
        }
        cout << endl;
    }
}
