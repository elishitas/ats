//Escriba un programa que lea la entrada estandar de dos números y muestre en su salida estandar suma, resta, multiplicacion y division
#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;

    cout<<"Ingrese el primer numero= ";
    cin>>num1;

    cout<<"Ingrese el segundo numero= ";
    cin>>num2;

    cout<<"Al sumar da= "<<num1+num2<<endl;
    cout<<"Al restar da= "<<num1-num2<<endl;
    cout<<"Al multiplicar da= "<<num1*num2<<endl;
    cout<<"Al dividir da= "<<num1/num2<<endl;

    
    return 0;
}