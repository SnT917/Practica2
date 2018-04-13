#include <iostream>
#include <time.h>

using namespace std;
void printM (int, int (*mat)[5]);
void rotateM(int (*M)[5], int (*m)[5], int);

int main()
{
   int n=5;
   int mat1[5][5]={0}, mat2[5][5]={0};
   srand(time(NULL));
   for(int filas=0; filas<n; filas++){
       for(int columnas=0; columnas<n; columnas++){
           mat1[filas][columnas] = rand()% 25 + 1; //Damos valores a las filas y columnas desde 1 hasta 25.
           }
       }
   cout<<"Matriz original: "<<endl;
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

void printM (int n, int (*mat)[5]){
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

void rotateM(int (*M)[5], int (*m)[5], int n){
    for(int i=0, l=0; i<n; i++, l++){
        for(int j=0, k=n-1; j<n; j++, k--){
            *(*(m+i)+j) = *(*(M+k)+l);
        }
    }
}
