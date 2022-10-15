//Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no.

#include <iostream>

using namespace std;

int main(){
    char vocal;

    cout << "Escriba una vocal= ";
    cin >> vocal;

    switch (vocal)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    cout << "Usted escribio la siguiente vocal en minuscula: " << vocal; break;
    default: cout << "La vocal que escribio no es vocal o se encuentra en mayuscula"; break;
    }

    return 0;

}