//Escriba un programa que lea la entrada estandar del precio de un producto y muestre en la salida entandar el precio del producto al aplicarle el iva.
#include<iostream>
using namespace std;

int main(){
    float precio = 0;
    float iva = 1.6;

    cout<<"Ingrese el precio que quiere colocarle IVA= ";
    cin>>precio;
    cout<<"El precio sin IVA es= "<<precio<<endl;

    float aplicariva = precio*iva;

    cout<<"El precio con IVA es= "<<aplicariva<<endl;
    return 0;

}
