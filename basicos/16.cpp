//Escriba un programa que solicite una edad (un entero) e indique en la salida estandar si la edad introducida esta en el rango de 18 a 25

#include<iostream>

using namespace std;

int main(){
    int edad;
    cout << "Ingrese su edad= "; cin >> edad;

    if (edad >= 18 && edad <= 25) {
        cout << "Usted se encuentra en el rango de 18 a 25";
    } else {
        cout << "Usted no encuentra en esa edad";
    }
    return 0;
}