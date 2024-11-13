/*Materia: Programación I, Paralelo 1
Autor: Carlos Riveros Lopez.
Fecha creación: 06/11/2024
Número de ejercicio: 14
Problema planteado: Realizar un algoritmo recursivo para elaborar un programa en el que dado
un entero n > 1, calcule e imprima los elementos correspondientes a la
conjetura de Ullman (en honor al matemático Ullman) que consiste en lo
siguiente:
• Empiece con cualquier entero positivo.
• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele
1.
• Obtenga enteros sucesivamente repitiendo el proceso.
Al final se obtendrá el número 1, independientemente del entero inicial. Por
ejemplo, cuando el entero inicial es 26, la secuencia será:
26 13 40 20 10 5 16 8 4 2 1  */

#include <iostream>

using namespace std;

void conjeturaUllman(int n) {
    cout << n << " ";

    if (n == 1) {
        return;
    }

  
    if (n % 2 == 0) {     // Si n es par, lo dividimos entre 2
        conjeturaUllman(n / 2);
    }
    // Si n es impar, multiplicamos por 3 y sumamos 1
    else {
        conjeturaUllman(n * 3 + 1);
    }
}

int main() {
    int n;

    cout << "Introduce un número entero positivo mayor que 1: ";
    cin >> n;

    if (n > 1) {
        cout << "Secuencia de la conjetura de Ullman para " << n << ": ";
        conjeturaUllman(n);
        cout << endl;
    } else {
        cout << "El número debe ser mayor que 1." << endl;
    }

    return 0;
}
