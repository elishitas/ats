//Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula, es una vocal mayuscula o no es una vocal.

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
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    cout << "Usted escribio una vocal en minuscula/mayuscula: " << vocal; break;
    default: cout << "La vocal que escribio no es vocal"; break;
    }

    return 0;
}