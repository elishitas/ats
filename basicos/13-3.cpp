//Escriba un programa que lea tres numeros y determine cual de ellos es mayor, que pasa si los tres numeros son iguales
/*
1 2 3
1 > 2 y 3 -> 1 es mayor
sino es mayor
2>3
si es mayor -> 2 es mayor
si no es mayor
entonces -> 3 es mayor
*/

#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Ingrese tres numeros= ";
    cin >> n1 >> n2 >> n3;

    if(n1 == n2 == n3 ){ 
        cout << "Los tres numeros son iguales\n";
    }
    else if ( n1 > n2 , n1 > n3 ){ //n2 < n1 > n3
        cout << "El primer numero es el mayor y es= " << n1;
    }
    else if ( n2 > n1 , n2 > n3 ){ 
        cout << "El segundo numero es el mayor y es= " << n2;
    }
    else if ( n3 > n1 , n3 > n2 ){ 
        cout << "El tercer numero es el mayor y es= " << n3;
    }else{
        cout << "Escriba numeros sin comas";
    }

    return 0;
}

/*
#include <iostream>

using namespace std;

int main() {
   int a = 5, b = 10, c = 15;
   cout  << boolalpha
         << "The true expression "
         << "a < b && b < c yields "
         << (a < b && b < c) << endl
         << "The false expression "
         << "a > b && b < c yields "
         << (a > b && b < c) << endl;
}

*/