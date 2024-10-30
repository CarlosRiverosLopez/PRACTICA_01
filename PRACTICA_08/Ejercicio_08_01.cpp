/* Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 1
 Problema planteado:  Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir
de este arreglo determine la desviación típica. */

#include <iostream>
#include <math.h>

using namespace std;

void IntroduccirEdades(int Edades[], int &cantidad);
void DesviacionEstandar(int Edades[], int cantidad);


int main(){
    
    int Edades[100], cantidad = 0;
    
    IntroduccirEdades(Edades,cantidad);
    DesviacionEstandar(Edades,cantidad);

    return 0;
}


void IntroduccirEdades(int Edades[], int &cantidad){
    int edad;
    cout << "Ingrese las edades( si quiere acabar aprete -1): " << endl;
    
    while (true){
        cout << "Edad: ";
        cin >> edad;
        if (edad == -1){
            
            return; //Sale de la funcion
        }
        Edades[cantidad] = edad;
        cantidad++;
    }
}
void DesviacionEstandar(int Edades[], int cantidad){
    float suma = 0.0;
    float sumaDesviacionesCuadradas = 0.0;
    for(int i= 0; i<cantidad; i++){
        suma += Edades[i]; //suma de edades
    }
    
    float media = suma  / cantidad;
    
    for (int i = 0; i<cantidad; i++){
        sumaDesviacionesCuadradas += pow(Edades[i] - media, 2 );
    }
    
    float desviacion = sqrt(sumaDesviacionesCuadradas / cantidad);
    
    cout << "la desviacion estandar: " << desviacion;
    