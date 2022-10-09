/*La calificacion final  de un estudiante es la media ponderada de tres notas=
La nota de practicas que cuenta un 30% del total,
La nota teorica que cuenta con un 60% del total, 
y la nota de participacion que cuenta un 10% del total.
Escriba un programa que lea la entrada estandar las tres notas de un estudiante y escriba en la salida 
estandar su promedio*/

#include<iostream>
using namespace std;

int main(){
    float practica, teorica, participacion, nota_final = 0;

    cout << "Ingrese la nota practica del estudiante= ";
    cin >> practica;
    cout << "Ingrese la nota teorica del estudiante= ";
    cin >> teorica;
    cout << "Ingrese la nota participacion del estudiante= ";
    cin >> participacion;

    practica *= 0.30; // practica = practica * 0.30
    teorica *= 0.60;
    participacion *= 0.10;

    nota_final = practica + teorica + participacion;

    cout << "\nLa nota final es= " << nota_final<<endl;
    return 0;
}