// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 19/09/2024
// Número de ejercicio: 5
// Problema planteado: Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas: 5 Bs., 1 Bs., 0.50 Bs., 0.20 Bs. y 0.10 Bs. Realizar el programa en el que, dado el precio del artículo y la cantidad en bolivianos entregada por el consumidor, nos indique el cambio a entregar empleando el menor número posible de monedas.
#include <iostream>

using namespace std;
//Funcion que cambia por monedas
void cambio (float n){
    if(n >= 5.0){
        int moneda = n / 5.0;
        cout << moneda <<" monedas de 5 Bs"<<endl;
        n -= (moneda * 5.0);
    }
    if(n >= 1.0){
        int moneda = n / 1.0;
        cout << moneda <<" monedas de 1 Bs"<<endl;
        n -= (moneda * 1.0);
    }
    if(n >= 0.5){
        int moneda = n / 0.5;
        cout << moneda <<" monedas de 0.5 Bs"<<endl;
        n -= (moneda * 0.5);
    }
    if(n >= 0.2){
        int moneda = n / 0.2;
        cout << moneda <<" monedas de 0.2 Bs"<<endl;
        n -= (moneda * 0.2);
    }
    if(n >= 0.1){
        int moneda = n / 0.1;
        cout << moneda <<" monedas de 0.1 Bs"<<endl;
        n -= (moneda * 0.1);
    }
}
void cambio (float);

int main (){
    float precio, efectivo;
    cout << "Ingrese el precio del articulo ";
    cin >> precio;
    cout << "Ingrese el dimero recibido ";
    cin >> efectivo;
    cambio(efectivo - precio);
    return 0; 
}