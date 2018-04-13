#include <iostream>
#include <time.h>

//Problema 14. Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
//imprima la matriz rotada 90, 180 y 270 grados.
//Ejemplo:

//Matriz Original   Matriz Rotada 90°
// 1  2  3  4  5    21 16 11  6 1
// 6  7  8  9 10    22 17 12  7 2
//11 12 13 14 15    23 18 13  8 3
//16 17 18 19 20    24 19 14  9 4
//21 22 23 24 25    25 20 15 10 5

using namespace std;
void printM (int, int (*mat)[5]); //Prototipos de la función para imprimir y rotar la matriz.
void rotateM(int (*M)[5], int (*m)[5], int);

int main()
{
   int n=5;
   int mat1[5][5]={0}, mat2[5][5]={0}; //Definimos la matriz original mat1(Aleatoria) y mat2 vacía.
   srand(time(NULL));
   for(int filas=0; filas<n; filas++){ //Generamos los valores aletorios para la matriz mat1
       for(int columnas=0; columnas<n; columnas++){
           mat1[filas][columnas] = rand()% 25 + 1; //Damos valores a las filas y columnas desde 1 hasta 25.
           }
       }
   cout<<"Matriz original: "<<endl; //Se imprimen las matrices y se llama las funciones para realizar la rotación.
   printM(n,mat1);
   rotateM(mat1,mat2,n);
   cout<<endl<<"Matriz rotada 90 grados "<<endl;
   printM(n,mat2);
   rotateM(mat2,mat1,n);
   cout<<endl<<"Matriz rotada 180 grados "<<endl;
   printM(n,mat1);
   rotateM(mat1,mat2,n);
   cout<<endl<<"Matriz rotada 270 grados "<<endl;
   printM(n,mat2);
    return 0;
}

void printM (int n, int (*mat)[5]){ //Función para imprimir la matriz organizadamente debido a que los valores generan problema de identación.
    for(int i=0;i<n; i++){
        for(int j=0; j<n; j++){
            if(n*n>=100){
                if(*(*(mat+i)+j)>=100)cout<<*(*(mat+i)+j)<<" ";
                else if(*(*(mat+i)+j)>=10)cout<<" "<<*(*(mat+i)+j)<<" ";
                else cout<<" "<< *(*(mat+i)+j)<<" ";
            }
            else{
                if(*(*(mat+i)+j)>=10)cout <<*(*(mat+i)+j)<<" ";
                else cout<<" "<<*(*(mat+i)+j)<<" ";
            }
        }
        cout<<endl;
    }
}

void rotateM(int (*M)[5], int (*m)[5], int n){ //Función que rota la matriz.
    for(int i=0, l=0; i<n; i++, l++){
        for(int j=0, k=n-1; j<n; j++, k--){
            *(*(m+i)+j) = *(*(M+k)+l);
        }
    }
}
