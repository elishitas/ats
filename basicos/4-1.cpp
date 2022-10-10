//Escriba un programa que lea la entrada estandar de dos números y muestre en su salida estandar suma, resta, multiplicacion y division, inicializando las variables

#include <iostream>
using namespace std;

int main(){
    int n1, n2, suma = 0 , resta = 0, multiplicacion = 0, division = 0;

    cout<<"Por favor ingrese el primer numero= "; cin>>n1;
    cout<<"Por favor ingrese el segundo numero= "; cin>>n2;

    suma= n1 + n2;
    resta= n1 - n2;
    multiplicacion= n1 * n2;
    division= n1 / n2;

    cout<<"La suma de los dos numeros es= "<<suma<<endl;
    cout<<"La resta de los dos numeros es= "<<resta<<endl;
    cout<<"La multiplicacion de los dos numeros es= "<<multiplicacion<<endl;
    cout<<"La division de los dos numeros es= "<<division<<endl; 

    return 0;

}