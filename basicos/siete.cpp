//Escribe la siguiente expresion en C++ (a+(b/c))/(d+e/f)

//a(b+c)
//Sumabc -> b+c -> bc 
//sumaabc -> a + bc


#include<iostream>
using namespace std;

int main(){

    int a = 0, b = 0, c = 0, divisionbc = 0, sumaabc = 0;
    int d = 0, e = 0, f = 0, divisionef = 0, sumadef = 0;
    int divisiontotal = 0;

    cout << "Ingrese un primer numero = ";
    cin >> a;
    cout << "Ingrese su segundo numero= ";
    cin >> b;
    cout << "Ingrese su tercer numero= ";
    cin >> c;

    divisionbc = (b / c);
    cout << "La division de segundo numero y tercer numero es= " << divisionbc <<endl;

    sumaabc = (a + divisionbc);
    cout << "La suma del primer numero con la division del segundo y el tercero da= " << sumaabc << endl;

    cout << "Ingrese un cuarto numero = ";
    cin >> d;
    cout << "Ingrese su quinto numero= ";
    cin >> e;
    cout << "Ingrese su sexto numero= ";
    cin >> f;

    divisionef = (e / f);
    cout << "La division de quinto numero y sexto numero es= " << divisionef <<endl;

    sumadef = (d + divisionef);
    cout << "La suma del cuarto numero con la division del quinto y el sexto da= " << sumadef << endl;

    //dividir sumaabc y sumadef -> divisiontotal

    divisiontotal = sumaabc / sumadef;
    cout << "La division entre los primeros tres numeros y los ultimos numeros es de= " << divisiontotal << endl;

    return 0;
}