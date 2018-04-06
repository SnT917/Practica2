#include <iostream>
#include <time.h>
using namespace std;

//Problema 2. Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
//y luego imprima cuantas veces se repite cada letra en el arreglo.

//Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB. El programa debe imprimir: ABAR-
//SECAAB

//A: 4
//B: 2
//C: 1
//Y así sucesivamente.

int main(){
    //Contadores para todas las posibles letras.
    int numero = 0, con=0, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;
    const int longitud = 200; //Longitud del arreglo.
    char cad[longitud];
    srand(time(NULL)); //Función para números aleatorios.

    for (int i=0; i<longitud; i++){
        numero = rand()%(0-26); //Generar números aleatorios desde el 0 hasta el 26 para luegos sumarlos a la A (volver los enteros a una letras).
        cad[i] = numero + 'A';
    }

    cout<<cad<<endl;

    while(cad[con]!='\0'){ //Conteo de cada una de las letras hasta que finaliza la cadena de texto.

        if(cad[con]=='A'){
            a++;
            con++;}
        else if(cad[con]=='B'){
            b++;
            con++;}
        else if(cad[con]=='C'){
            c++;
            con++;}
        else if(cad[con]=='D'){
            d++;
            con++;}
        else if(cad[con]=='E'){
            e++;
            con++;}
        else if(cad[con]=='F'){
            f++;
            con++;}
        else if(cad[con]=='G'){
            g++;
            con++;}
        else if(cad[con]=='H'){
            h++;
            con++;}
        else if(cad[con]=='I'){
            i++;
            con++;}
        else if(cad[con]=='J'){
            j++;
            con++;}
        else if(cad[con]=='K'){
            k++;
            con++;}
        else if(cad[con]=='L'){
            l++;
            con++;}
        else if(cad[con]=='M'){
            m++;
            con++;}
        else if(cad[con]=='N'){
            n++;
            con++;}
        else if(cad[con]=='O'){
            o++;
            con++;}
        else if(cad[con]=='P'){
            p++;
            con++;}
        else if(cad[con]=='Q'){
            q++;
            con++;}
        else if(cad[con]=='R'){
            r++;
            con++;}
        else if(cad[con]=='S'){
            s++;
            con++;}
        else if(cad[con]=='T'){
            t++;
            con++;}
        else if(cad[con]=='U'){
            u++;
            con++;}
        else if(cad[con]=='V'){
            v++;
            con++;}
        else if(cad[con]=='W'){
            w++;
            con++;}
        else if(cad[con]=='X'){
            x++;
            con++;}
        else if(cad[con]=='Y'){
            y++;
            con++;}
        else if(cad[con]=='Z'){
            z++;
            con++;}
        else{
            con++;
        }

    }
    cout<<"A: "<<a<<endl; //Imprimir la suma de las veces que se encontro la letra dentro de la cadena.
    cout<<"B: "<<b<<endl;
    cout<<"C: "<<c<<endl;
    cout<<"D: "<<d<<endl;
    cout<<"E: "<<e<<endl;
    cout<<"F: "<<f<<endl;
    cout<<"G: "<<g<<endl;
    cout<<"H: "<<h<<endl;
    cout<<"I: "<<i<<endl;
    cout<<"J: "<<j<<endl;
    cout<<"K: "<<k<<endl;
    cout<<"L: "<<l<<endl;
    cout<<"M: "<<m<<endl;
    cout<<"N: "<<n<<endl;
    cout<<"O: "<<o<<endl;
    cout<<"P: "<<p<<endl;
    cout<<"Q: "<<q<<endl;
    cout<<"R: "<<r<<endl;
    cout<<"S: "<<s<<endl;
    cout<<"T: "<<t<<endl;
    cout<<"U: "<<u<<endl;
    cout<<"V: "<<v<<endl;
    cout<<"W: "<<w<<endl;
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    cout<<"Z: "<<z<<endl;


        }
