// Estructuras condionales 
/*
- Condicional Simple
- Se ejecuta cierta parte del codigo dependiendo de la condicion
La sentencia if

    if(condicion){
        instruccion 1;
    }
    else{
        instruccion 2;
    }
*/
#include <iostream>
using namespace std;

int main(){
    int num, dato = 5; // operador de asignacion =

    cout << "Ingrese un numero= ";
    cin >> num;

    if(num == dato){ // operador de igualdad == / != / < / > / <= / >=
        cout << "Usted ingreso el mismo Numero que tenemos guardado =D"<<endl;
    }
    else{
        cout << "Segui intentando D="<<endl;
    }
    return 0;
}