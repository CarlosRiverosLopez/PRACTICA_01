// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 19/09/2024
// Número de ejercicio: 7
// Problema planteado: Calcular el coeficiente binomial a partir de la lectura de dos números enteros a partir de la relación:
#include <iostream>

using namespace std;

int factorial (int);
int binomial(int, int);

int main (){
    int n, m;
    cout << "Ingrese los valores n y m respectivamente"<<endl;
    cin >> n >> m;
    cout << "Su valor binomial es " << binomial(n, m) << endl;
    return 0;
}
//FUncion para sacar el factorial para el el binomial 
int factorial(int n){
    int f = 1;
    while(n > 0){
        f *= n;
        n--;
    }
    return f;
}

int binomial (int n, int m){
    int nfacto = factorial(n);
    int mfacto = factorial(m);
    int nandmfacto = factorial(n - m);
    int resultado = nfacto / (mfacto * nandmfacto);
    return resultado;
}