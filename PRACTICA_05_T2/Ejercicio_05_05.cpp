// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 19/09/2024
// Número de ejercicio: 5
// Problema planteado: Crear un algoritmo que indique si un número es perfecto o no. Se dice que un número es perfecto si la suma de sus divisores es igual al número. Por ejemplo, 6 tiene como divisores 1, 2, y 3, entonces 1+2+3=6; el número 6 es perfecto. Si el número es 9, tiene como divisores 1, 3, entonces 1+3=4; no es perfecto.
# include <iostream>

using namespace std;
// Funcion para crear el numero perfecto
int SumaDivisores(int n){
    int suma = 0;
    for (int i = 1; i <= n/2; i++){
        if(n % i == 0);
        suma += i;
    }
    return suma;
}

int SumaDivisores(int);

int main (){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    if (n == SumaDivisores(n)){
        cout << n << " es un numero perfecto." << endl;
    }
    else {
        cout << n << " no es un numero perfecto." << endl;
    }
    return 0;
}