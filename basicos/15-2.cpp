//Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula, es una vocal mayuscula o no es una vocal.

#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    char vocal;
    cout<< "Suministre un caracter: ";cin >> vocal;

    if ( vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u' || vocal == 'A' || vocal == 'E' || vocal == 'I' || vocal == 'O' || vocal == 'U'){
        if(islower(vocal) == 0){ //this
            cout << "Es una vocal mayuscula"<<endl;
        }else{
            cout << "Es una vocal minuscula"<<endl;
        }
    }else{
        cout << "No es una vocal"<<endl;
    }
    return 0;
}