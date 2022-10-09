//Escriba un programa que resuelva la resolvente cuadratica
//(-b(+- )raiz(bcuadrado - 4.a.c))/2.a

#include<iostream>
#include<math.h>
using namespace std;

//a. b. c. resultado

int main(){
    float a, b, c, resultadox = 0, resultadoy = 0;
    cout << "Ingrese un valor para A= ";
    cin >> a;
    cout << "Ingrese un valor para B= ";
    cin >> b;
    cout << "Ingrese un valor para C= ";
    cin >> c;

    resultadox = (-b + sqrt(pow(b, 2) - 4 * a * c))/(2*a);
    resultadoy = (-b - sqrt(pow(b, 2) - 4 * a * c))/(2*a);

    cout << "\nEl resultado en la suma es de la resolvente es de= " << resultadox << endl;
    cout << "\nEl resultado en la resta es de la resolvente es de= " << resultadoy << endl;

    return 0;
}

//Dato de color= compila y si da -nan(ind), se debe asignar un valor más grande en la variable "b" 