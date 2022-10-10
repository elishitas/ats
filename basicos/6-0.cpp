//Escribe la siguiente expresión en C++ A+B/C+D:

#include<iostream>
using namespace std;

int main(){
    int num1a = 0, num2b = 0, num3c = 0, num4d = 0, suma1 = 0, suma2 = 0, division = 0;
    cout<<"Inserte un primer numero= "; cin>>num1a; 
    cout<<"Inserte un segundo numero= "; cin>>num2b;
    cout<<"Inserte un tercer numero= "; cin>>num3c;
    cout<<"Inserte un cuarto numero= "; cin>>num4d;

    cout<<"Su primer numero elegido es= "<<num1a; 
    cout<<"\nSu segundo numero elegido es= "<<num2b;

    suma1 = (num1a + num2b);

    cout << "\nEl resultado de la suma 1 es= "<< suma1;

    cout<<"\nSu tercer numero elegido es= "<<num3c; 
    cout<<"\nSu cuarto numero elegido es= "<<num4d;

    suma2 = (num3c + num4d);

    cout << "\nEl resultado de la suma 2 es= "<< suma2;

    division = suma1 / suma2;

    cout<<"\nLa division entre la suma 1 y la suma 2 es= " << division<<endl;

    return 0;
}