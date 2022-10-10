//Escribe la siguiente expresion en C++  a + (b/(c-d))

#include<iostream>
using namespace std;

int main(){
    float a, b, c, d, resultado = 0;

    cout << "Escriba el primer numero= ";
    cin >> a;
    cout << "Escriba el segundo numero= ";
    cin >> b;
    cout << "Escriba el tercer numero= ";
    cin >> c;
    cout << "Escriba el cuarto numero= ";
    cin >> d;

    resultado = a + (b / (c - d));

    cout << "\nEl resultado de la expresion es de= " << resultado << endl;

    return 0;
}