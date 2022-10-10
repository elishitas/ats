//Realice un programa que lea un valor entero y determine si se trata de un numero par o inpar

#include<iostream>
using namespace std;

int main(){
    int numero;

    cout << "Digite un numero= ";
    cin >> numero;
    
    if(numero == 0){
        cout << "El numero es igual a cero";
    }
    else if(numero%2 == 0){
        cout << "El numero es par";
    }
    else{
        cout << "El numero es inpar";
    }
    return 0;
}