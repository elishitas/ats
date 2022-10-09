//Escriba  un programa que lea la nota final de cuatro alumnos y calcule nota final media de los cuatro alumnos
#include<iostream>
using namespace std;

int main(){
    float a, b, c, d, promedio = 0;

    cout << "Ingrese la nota final del alumno A= ";
    cin >> a;
    cout << "Ingrese la nota final del alumno B= ";
    cin >> b;
    cout << "Ingrese la nota final del alumno C= ";
    cin >> c;
    cout << "Ingrese la nota final del alumno D= ";
    cin >> d;

    promedio = (a + b + c + d) / 4;

    cout << "El promedio de los cuatro alumnos es de= " << promedio<<endl;
    return 0;
}