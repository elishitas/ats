//Escriba un fragmento de programa que intercambie los valores de dos varibles.

#include<iostream>
using namespace std;

int main(){
    int x, y, aux;

    cout << "Digite el valor de x= ";
    cin >> x;
    cout << "Digite el valor de y= ";
    cin >> y;

    /* ej
    x = 10
    y = 5
    aux= /?
    */

    aux = x;
    x = y;
    y = aux;

    cout << "\nEl valor de X  ahora es= " << x<<endl;
    cout << "\nEl valor de Y ahora es= " << y<<endl;

    return 0;
}