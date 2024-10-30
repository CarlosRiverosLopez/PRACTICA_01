/* Materia: Programación I, Paralelo 1
 Autor: Carlos Riveros Lopez.
 Fecha creación: 30/10/2024
 Número de ejercicio: 3
 Problema planteado: Se tiene 3 vectores de 10 elementos cada uno:
• Vector de nombres.
• Vector Apellidos
• Vector de Edad
Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
Esto debe realizar N veces.  */

#include <iostream>
#include <string>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

void numeroRamdom(string Nombre[], string Apellidos[], int Edades[]);

int main() {
    string Nombre[10] = {"Juan", "Maria", "Pedro", "Ana", "Luis","Sofia", "Carlos", "Elena", "Miguel", "Lucia"};
    string Apellidos[10] = {"Pérez", "García", "Martínez", "Rodrígue","Hernández", "López", "González", "Díaz","Morales", "Ramírez"};
    int Edades[10] = {25, 30, 22, 28, 35, 40, 18, 21, 33, 27};
    int N;

    srand(time(NULL)); // Inicializar la semilla para números aleatorios

    cout << "Cuántos números quiere ver: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Personas " << (i + 1) << ": ";
        numeroRamdom(Nombre, Apellidos, Edades);
    }

    return 0;
}

void numeroRamdom(string Nombre[], string Apellidos[], int Edades[]) {
    int NombreRand = rand() % 10;     
    int ApellidosRand = rand() % 10;  
    int EdadesRand = rand() % 10;     

    // Mostrar el resultado
    cout << Nombre[NombreRand] << " " << Apellidos[ApellidosRand] << ", " << Edades[EdadesRand] << " años." << endl; 
}
