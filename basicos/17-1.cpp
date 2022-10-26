/*El residuo de cualquier numero*/

#include<iostream>

using namespace std;

int main(){
    int numero;
    cout << "Digite un numero: "; cin >> numero;
 
    numero = numero%10;
 
    cout << "el residuo es: " <<numero;

    return 0;
}