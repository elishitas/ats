#include <iostream>
using namespace std;
struct String{
	char* cadena;
	int cantidadCaracteres;
};
// Precondicion: @cadenaACopiar es una cadena de caracteres
// Postcondicion: Devuelve una instancia valida de String que es una copia de @cadenaACopiar
String* CrearString(const char* cadenaACopiar);
// Precondicion: @cadenaACopiar es una cadena de caracteres
// Postcondicion: Devuelve una instancia que es una copia de @cadenaACopiar
char* CrearCopia(const char* cadenaACopiar);
// Precondicion: @destino es una cadena de caracteres. El tamano de destino es igual o mayor al de origen
// Postcondcion: Copia @origen en @destino
void Copiar(const char* origen, char*destino); //Finalmente deberia ser una linea codigo
// Precondicion: @cadena es una cadena de caracteres
// Postcondcion: Devuelve la cantidad de caracteres de @cadena
int ContarCaracteres(const char *cadena); ////Finalmente deberia ser 4 0 3 lineas de codigo
// Precondicion: @cadena y @subcadena son cadena de caracteres. El tamano de @cadena es suficiente para agregar la @subcadena
//Postcondicion: Agrega al final de @cadena la @subcadena
void Concatenar(char *cadena, char* subcadena); //Finalmente deberia ser una linea codigo
int main() {
	char* resultado = CrearCopia("SALUDOS PARA TODOS!!");
	cout<<resultado<<endl;
	delete []resultado;
	// Memory LEAKS!
	return 0;
}

char* CrearCopia(const char* cadenaACopiar){
	int tamanio = ContarCaracteres(cadenaACopiar) + 1;
	char* auxiliar = new char[tamanio];
	Copiar(cadenaACopiar, auxiliar);
	return auxiliar;
}

// O(N)
void Copiar(const char* origen, char*destino){
	while(*destino++ = *origen++);
}

//O(N)
int ContarCaracteres(const char *cadena){
	const char* direccionInicial = cadena;
	while(*cadena++);
	const char* direccionFinal = cadena-1;
	return (direccionFinal - direccionInicial);
}

// O(N)
void Concatenar(char *cadena, char* subcadena){
	char* posicionBarraCero = cadena + ContarCaracteres(cadena);
	Copiar(subcadena, posicionBarraCero);
}

String* CrearString(const char* cadenaACopiar){
	String* nuevoString = new String;
	nuevoString->cadena = CrearCopia(cadenaACopiar);
	nuevoString->cantidadCaracteres = ContarCaracteres(cadenaACopiar);
	
	return nuevoString;
}