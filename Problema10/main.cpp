#include <iostream>
using namespace std;

//Problema 10. Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo 
//usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano y su equivalente 
//arábigo:
//M: 1000
//D: 500
//C: 100
//L: 50
//X: 10
//V: 5
//I: 1
//Los números romanos se forman usando estos caracteres en base a dos reglas:
//Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
//Si un carácter esta seguido por uno de mayor valor, su valor se resta del total.
//Ejemplo: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
//Nota: la salida del programa debe ser: El número ingresado fue: DCLXVI Que corresponde a: 666.

int main(){
    char rom;
    int num=0,aux=0,ant=0,dex;
    cout<<"Introduzca el numero romano: "<<endl;

while(rom!='\n'){
    rom=getchar();
    dex=aux-num;
    switch(rom){ //Se hace el posible caso de la letra ingresada por el usuario, asignando un valor a cada una.
    case 'I':num=1;break;
    case 'i':num=1;break;
    case 'V':num=5;break;
    case 'v':num=5;break;
    case 'X':num=10;break;
    case 'x':num=10;break;
    case 'L':num=50;break;
    case 'l':num=50;break;
    case 'C':num=100;break;
    case 'c':num=100;break;
    case 'D':num=500;break;
    case 'd':num=500;break;
    case 'M':num=1000;break;
    case 'm':num=1000;break;
}
        if (rom=='\n')
        cout<<"";

        else
        if (dex>ant && ant<num) //Se hacen las comparaciones teniendo en cuenta de sí el número anterior
            //es mayor o menor al siguiente (letra) y realiza la operación de suma o resta respectivamente
        aux=dex+(num-ant);
        else if (aux==0){
            ant=num;
            aux+=num;
            }
        else
        if (aux){
        if(num<=ant){
        aux+=num;
        ant=num; //Obtenemos el valor anterior para ver la condición anterior nuevamente hasta llegar a la totalidad de letras.
        }
        else if (num>ant){
            aux=(num-ant);
            ant=num;
            }
        }
    }
cout<<"El numero en forma decimal es: "<<aux<<endl; //Se entrega el resultado.
}
