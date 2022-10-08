//Escriba la siguiente expresion en c++ a/b + 1 
#include<iostream>
using namespace std;

int main(){
    float num1, num2, resultado = 0;

    cout<<"Inserte su primer numero: ";
    cin>>num1;
    cout<<"Inserte su segundo numero: ";
    cin>>num2;

    resultado = (num1 / num2) + 1;

    cout.precision(2);
    cout << "\nEl resultado es= " << resultado << endl;

    return 0;
}