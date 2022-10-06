/*Realice un programa que lea la entrada estanda de los siguientes datos de un persona:
    Edad: dato de tipo int
    Sexo: dato de tipo char
    Altura: dato de tipo float 
    
Traer los datos , el programa debe mostrarlo en la salida estandar*/

#include<iostream>
using namespace std;

int main(){
    int edad= 0;
    char sexo[10];
    float altura=0;

    cout<<"Por favor ingrese su edad= "; cin>>edad;
    cout<<"Por favor ingrese su sexo= "; cin>>sexo;
    cout<<"Por favor ingrese su altura en metros= "; cin>>altura;


    cout<<"Su edad es= "<<edad<<endl;  
    cout<<"Su sexo es= "<<sexo<<endl;  
    cout<<"Su altura es= "<<altura<<endl;  

    return 0;
}
