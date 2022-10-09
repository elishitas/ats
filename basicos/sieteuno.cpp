//Escribe la siguiente expresion en C++ (a+(b/c))/(d+e/f), otra forma

#include<iostream>
using namespace std;

int main(){
    float a, b, c, d, e, f, resultado = 0;

    cout << "Digite el primer numero= ";
    cin >> a;
    cout << "Digite el segundo numero= ";
    cin >> b;
    cout << "Digite el tercero numero= ";
    cin >> c;
    cout << "Digite el cuarto numero= ";
    cin >> d;
    cout << "Digite el quinto numero= ";
    cin >> e;
    cout << "Digite el sexto numero= ";
    cin >> f;

    resultado = (a+(b/c))/(d+(e/f));
    cout.precision(2);  
    cout << "El resultado de la expresion es de= " << resultado << endl;

    return 0;
}
