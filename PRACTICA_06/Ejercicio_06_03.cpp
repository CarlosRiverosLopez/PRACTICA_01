// Materia: Programación I, Paralelo 1
// Autor: Carlos Riveros Lopez.
// Fecha creación: 04/10/2024
// Número de ejercicio: 3
// Problema planteado:Tu trabajo es determinar los siguientes datos: a) Mostrar la matriz que describe el área. b) Mostrar el número de filas y columnas que no tienen un muerto viviente. c) Determinar las coordenadas de los muertos vivientes en la matriz. Utilice vectores paralelos para almacenar la posición de los muertos vivientes. Un vector almacenara el índice de la fila y otro vector almacenara el índice de la columna. d) La cantidad de muertos vivientes que existen en toda la matriz. e) Determinar si dos o más muertos vivientes se encuentran en la primera columna. Si es así imprimir “no es posible entrar al complejo” de otro modo imprimir “es posible entrar al complejo”.

#include <iostream>
#include <vector>

using namespace std;

void mostrarMatriz (char [3][4]);
void contarMuertos (char [3][4], int&, int&);
vector<pair<int,int>> posiciones (char [3][4]);
int cantidad (char [3][4]);
void entrar (char [3][4]);

int main (){
    char matriz [3][4] = {{'x', 'o','x','o'},{'o', 'o','o','o'},{'x', 'o','x','o'}};
    cout << "a) mostrar matriz" << endl;
    mostrarMatriz(matriz);
    int filas = 0, columnas = 0;
    cout << "b) Muertos vivientes: "<<endl;
    contarMuertos(matriz, filas, columnas);
    cout << "Filas libres: " << filas << endl;
    cout << "Columnas libres: " << columnas << endl;
    cout << "c) Posiciones de los muertos vivientes: " << endl;
    vector<pair<int,int>> pos;
    pos = posiciones(matriz);
    for(int i = 0; i < pos.size(); i++){
        cout << pos[i].first << " " << pos[i].second << endl;
    }
    cout << "d) Cantidad de muertos vivientes" << endl;
    int c = cantidad(matriz);
    cout << "La cantidad de muertos vivientes es: " << c << endl;
    cout << "e) ";
    entrar(matriz);
}

void mostrarMatriz (char matriz[3][4]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Contar los no muertos de la carcel
void contarMuertos (char matriz[3][4], int& filas, int& columnas){
    for(int i = 0; i < 3; i ++){
        bool libre = true;
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] == 'x'){
                libre = false;
            }
        }
        if(libre){
            filas++;
        }
    }

    for(int j = 0; j < 4; j++){
        bool libr = true;
        for(int i = 0; i < 3; i++){
            if(matriz[i][j] == 'x'){
                libr = false;
            }
        }
        if(libr){
            columnas++;
        }
    }
}

vector<pair<int,int>> posiciones (char matriz [3][4]){
    vector<pair<int,int>> pos;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] == 'x'){
                pos.push_back(make_pair(i, j));
            }
        }
    }
    return pos;
}

int cantidad (char matriz[3][4]){
    int cant = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] == 'x')
                cant++;
        }
    }
    return cant;
}

void entrar (char matriz[3][4]){
    int muer = 0;
    for(int i = 0; i < 3; i++){
        if(matriz[i][0] == 'x')
            muer++;
    }

    if(muer < 2){
        cout << "Es posible entrar"<<endl;
    } else {
        cout << "No es posible entrar"<<endl;
    }
}