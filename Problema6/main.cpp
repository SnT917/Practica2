#include <iostream>
using namespace std;

//Problema 6. Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas por ma-
//yúsculas, los demás caracteres no deben ser alterados.

//Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
//Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA.

int main(){
  string c;
  unsigned int i;
  cout << "Escribe una cadena de caracteres: "<<endl; //Se ingresa una cadena de caracteres.
  cin >> c;
  cout <<"Original: "<<c<<endl;
  for(i=0; i<c.length(); i++){ //Se encuentra el tamaño de la cadena.
      c[i]=toupper(c[i]); //Transformamos a mayúscula todos los caracteres desde 0 hasta el tamaño.
  }
  cout <<"En mayuscula: "<<c<<endl; //Imprimimos el resultado.
  return 0;
}
