//Escriba un programa que lea dos numeros y determine cual de ellos es mayor

#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cout << "Ingrese dos numeros= ";
    cin >> n1 >> n2;

    if(n1>n2){
        cout << "El numero mayor es el= "<< n1;
    }else{
        cout << "El numero mayor es el " << n2;
    }
    return 0;
}
