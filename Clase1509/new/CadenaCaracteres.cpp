
#include <iostream>
using namespace std;


const char FinCadena = '\0';

void Copiar(const char* origen, char*destino){
	while(*destino++ = *origen++);
}

int ContarCaracteres(char *cadena){
	char* direccionInicial = cadena;
	while(*cadena++);
	char* direccionFinal = cadena-1;
	return (direccionFinal - direccionInicial);
}

void Concatenar(char *cadena, char* subcadena){
	char* posicionBarraCero = cadena + ContarCaracteres(cadena);
	Copiar(subcadena, posicionBarraCero);
}