//Escriba un programa que lea tres numeros y determine cual de ellos es mayor.
/*
n1 n2 n3

n1 > n2 & n3
n2 > n1 & n3
n3 > n1 & n2

n1 == n2 > n3
n2 == n3 > n1
n3 == n1 > n2


n1 == n2 == n3

*/

#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, numerorepetido = 0;

    cout << "Digite tres numeros= ";
    cin >> n1 >> n2 >> n3;

    numrepetido = n1 = n2;



    if(n1 > n2, n1 > n3){
        cout << "El numero 1 es mayor = " << n1;
    }
    else if(n2 > n3){
        cout << "El numero 2 es el mayor= " << n2;
    }
    else if (n3 > n2, n3 > n1){
        cout << "El numero 3 es el mayor= " << n3;
    }else if(n1 == n2 > n3){
        cout << "El numero 1 y 2 son mayores= " << n1, n2;
    }

        return 0;
}

//ver