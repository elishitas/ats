#include <iostream>
using namespace std;
void Copiar(char* origen, char* destino);
int main()
{

    char texto[] = "Hola que tal";

    char vector[100];

    Copiar(texto, vector);

    cout << vector<<endl;//Hola que tal

    return 0;

}
// Implementar esta funcion.
// Luego que tengan su implementacion: 
// Piensen como hacerlo en una linea codigo utilizando aritmetica de punteros!!!!!!!
// Precondicion: @origen es una cadena de caracteres, @destino tiene el tamanio suficiente para copiar
// Postcondicion: Copia cada caracter de @origen en @destino, incluso el \0
// - Copia la cadena de caracteres @origen en @destino
void Copiar(char* origen, char* destino) {
}

