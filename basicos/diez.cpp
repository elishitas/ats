//Realice un programa que calcule el valor que tome la siguiente funcion para unos valores dados de X e Y:
//raiz de x / y elevado al cuadrado - 2 -> (raizx) / ((y2)-1)

#include <iostream>
#include<math.h>

using namespace std;

int main(){
    float x, y, resultado = 0;

    cout<< "Ingrese el valor de x= ";
    cin>> x;
    cout << "Ingrese el valor de y= ";
    cin >> y;

    resultado = (sqrt(x)) / (pow(y,2) - 1);
    //pow se divide en dos partes, la 1era la variable que quiero elevar y la 2da variable a que exponente lo queremos elevar

    
    cout << "El resultado de la expresion es igual a= " << resultado << endl;

    return 0;
}