//Escribe la siguiente expresión en C++ A+B/C+D:

#include<iostream>
using namespace std;

int main(){
    int num1a = 0, num2b = 0, num3c = 0, num4d = 0, suma1 = 0;
    cout<<"Inserte un primer numero= "; cin>>num1a; 
    cout<<"Inserte un segundo numero= "; cin>>num2b;
    //cout<<"Inserte un tercer numero= "; cin>>num3c;
    //cout<<"Inserte un cuarto numero= "; cin>>num4d;

    cout<<"Su primer numero elegido es= "<<num1a<<endl; 
    cout<<"Su segundo numero elegido es= "<<num2b<<endl; 

    suma1 = (num1a + num2b);

    cout<<"El resultado de la suma 1 es= \n2", suma1; 

    //int division = suma1 / suma2;

    //cout<<"El resultado de la expresion pedida es= ", division; 

    return 0;
}