#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Problema 14. Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
//imprima la matriz rotada 90, 180 y 270 grados.
//Ejemplo:

//Matriz Original                   Matriz Rotada 90°
//1  2  3  4  5                       21 16 11 6  1
//6  7  8  9  10                      22 17 12 7  2
//11 12 13 14 15                      23 18 13 8  3
//16 17 18 19 20                      24 19 14 9  4
//21 22 23 24 25                      25 20 15 10 5

int main()
{
    int fil=5, col=5; //Generamos la matriz aleatoriamente de orden 5x5.
    int matriz[fil][col];
    srand(time(NULL));
    for(int filas=0; filas<fil; filas++){
        for(int columnas=0; columnas<col; columnas++){
            matriz[filas][columnas] = rand()% 25 + 1; //Damos valores a las filas y columnas desde 1 hasta 25.
        }
    }

    cout<<"Matriz Original:"<<endl;
    for(int filas=0; filas<fil; filas++){
        for(int columnas=0; columnas<col; columnas++){ //Imprimimos la matriz original.
            cout << matriz[columnas][filas]<<"  ";
        }cout<<endl;
    }

    cout<<"Matriz Rotada 90:"<<endl;
    for(int filas=0; filas<fil; filas++){
        for(int columnas=0; columnas<col; columnas++){ //Imprimimos la matriz rotada en 90 grados.
            cout << matriz[filas][columnas]<<"  ";
        }cout<<endl;
    }
    return 0;
}
