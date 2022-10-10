//Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo
//y escriba en la salida estandar su hipotenusa

//c2 = a2 + b2

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float a, b, hipotenusa = 0;

    cout << "Ingrese el cateto A del traingulo rectangulo= ";
    cin >> a;
    cout << "Ingrese el cateto B del traingulo rectangulo= ";
    cin >> b;

    hipotenusa = sqrt((a * a) + (b * b));

    cout <<"\nLa hipotenusa de estos dos catetos es de= " << hipotenusa << endl;

    return 0;
}