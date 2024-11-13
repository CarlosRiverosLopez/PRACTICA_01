/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 11
Problema planteado:  Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
comprado una pareja de conejos para criarlos y luego venderlos. Si la
pareja de conejos produce una nueva pareja cada mes y la nueva pareja
tarda un mes más en ser también productiva, ¿cuántos pares de conejos
podrá poner a la venta el granjero al cabo de un año?  */

#include <iostream>

using namespace std;

int fibonacci(int n) {
     
    if (n == 0 || n == 1) {  // En el mes 0 o 1, hay 1 par de conejos
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2); // el número de pares de conejos en el mes n es la suma de los pares de conejos de los dos meses anteriores
}

int main() {
    int meses = 12;
    
    int resultado = fibonacci(meses);

    cout << "Al cabo de " << meses << " meses, el granjero podrá vender " << resultado << " pares de conejos." << endl;

    return 0;
}
