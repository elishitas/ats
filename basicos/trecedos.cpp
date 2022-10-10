//Escriba un programa que lea dos numeros y determine cual de ellos es mayor, que pasa si los dos numeros son iguales

#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cout << "Por favor ingresa dos numero= ";
    cin >> n1 >> n2;

    if(n1 == n2){
        cout << "Los dos numeros son iguales";
    }
    else if(n1>n2){
        cout << "El primer numero es mayor y es= " << n1;
    }
    else{
        cout << "El segundo numero es mayor y es= " << n2;
    }

    return 0;
}