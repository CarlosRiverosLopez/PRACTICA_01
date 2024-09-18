// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 16/09/2024
// Número de ejercicio: 4
// Problema planteado:Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector. 

#include <iostream>
#include <vector>
using namespace std;

vector<int> ingresarDatos (int);
vector<int> multiplicacion (vector<int>, vector<int>);

int main (){
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;
    cout << "Ingrese los valores del primero vector"<<endl;
    vector<int> vector1 = ingresarDatos(n);
    cout << "Ingrese los valores del segundo vector"<<endl;
    vector<int> vector2 = ingresarDatos(n);
    cout << "La multiplicacion de ambos vectores es: "<<endl;
    vector<int> multi = multiplicacion(vector1, vector2);
    for(int i : multi){
        cout << i << "\t";
    }
    cout << endl;
    return 0;
}
// Funcion para ingresar los datos
vector<int> ingresarDatos (int n) {
    vector<int> numeros;
    for(int i = 0; i < n; i++){
        int a; 
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> a;
        numeros.push_back(a);
    }
    return numeros;
}

vector<int> multiplicacion (vector<int> v1, vector<int> v2 ) {
    vector<int> multi;
    for(int i = 0; i < v1.size(); i++){
        int m = v1[i] * v2[i];
        multi.push_back(m);
    }
    return multi;
}