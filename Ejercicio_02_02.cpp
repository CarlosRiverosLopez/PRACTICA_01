// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez
// Fecha creación: 04/09/2024
// Número de ejercicio: 2
// Problema planteado: Cálculo de la hipotenusa: Leer las longitudes de los dos catetos de un triángulo rectángulo y realizar una función para calcular la hipotenusa usando el teorema de Pitágoras.
#include <iostream>
#include <math.h>
using namespace std;
//Hacemos la funcion del teorema de pitagoras
void calculoHipotenusa(double &hipotenusa, int cateto1, int cateto2){
    hipotenusa = sqrt(pow (cateto1,2) + pow(cateto2,2));
}
int main(){
    int hipotenusa, cateto1, cateto2;
    cout << "Ingrese el primer cateto" << endl;
    cin >> cateto1;
    cout << "Ingrese el segundo cateto" << endl;
    cin >> cateto2;
    //llamar a la funcion
    calculoHipotenusa(hipotenusa, cateto1, cateto2);
    cout << "La hipotenusa de su triangulo es:" << hipotenusa << endl;
    return 0;
}