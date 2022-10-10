//Escriba un programa que lea dos numeros y determine cual de ellos es mayor
/*
numero1 > numero 2 -> numero 1
sino mayor es el numero 2
*/
#include <iostream>
using namespace std;

int main(){
    float numero1, numero2;

    cout << "Ingrese el primer numero= ";
    cin >> numero1;
    cout << "Ingrese el segundo numero= ";
    cin >> numero2;

    if(numero1 > numero2){
        cout << "El numero mayor es " << numero1;
    }else{
        cout << "El numero mayor es " << numero2;
    }
    return 0;
}