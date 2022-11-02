/*
Mostrar los meses del año, pidiendole al usuario un numero entre el 1 y el 12 y mostrar el mes que corresponde
*/

#include <iostream>
using namespace std;

int main(){
    int mes;

    cout << "Digite un numero de mes= ";
    cin >> mes;
    //Ej 3 = marzo

    switch (mes){
        case 1: cout << "Enero" ; break;
        case 2: cout << "Febrero" ; break;
        case 3: cout << "Marzo" ; break;
        case 4: cout << "Abril" ; break;
        case 5: cout << "Mayo" ; break;
        case 6: cout << "Junio" ; break;
        case 7: cout << "Julio" ; break;
        case 8: cout << "Agosto" ; break;
        case 9: cout << "Septiembre" ; break;
        case 10: cout << "Octubre" ; break;
        case 11: cout << "Noviembre" ; break;
        case 12: cout << "Diciembre" ; break;
    }
    return 0;
}
