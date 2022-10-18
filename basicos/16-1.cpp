/*Escriba un programa que lea de la entrada tres numeros. Despues debe leer un cuarto numero e indicar si el numero coincide con algunos de los introducidos con anterioridad*/

#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3, num4;

    cout << "Escriba un primer numero= "; cin>>num1;
    cout << "Escriba un segundo numero= "; cin>>num2;
    cout << "Escriba un tercer numero= "; cin>>num3;
    cout << "Escriba un cuarto numero= "; cin>>num4;

    if(num1 == num4){
        cout<<"El primero y cuarto numero son iguales";
    }else if (num2 == num4){
        cout<<"El segundo y cuarto numero son iguales";
    }else if (num3 == num4){
        cout << "El tercer y cuarto numero son iguales";
    }else{
        cout << "Usted escribio un numero diferente al primer, segundo y tercer numero";
    }    
    
    return 0;
}