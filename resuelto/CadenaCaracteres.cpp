#include <iostream>
#include "CadenaCaracteres.h"

using std::cout;

const char FinCadena = '\0';

void CadenaCaracteres::Copiar(const char* origen, char*destino){
	while(*destino++ = *origen++);
}

int CadenaCaracteres::ContarCaracteres(const char *cadena){
	const char* direccionInicial = cadena;
	while(*cadena++ != FinCadena);
	const char* direccionFinal = cadena-1;
	return (direccionFinal - direccionInicial);
}

void CadenaCaracteres::Concatenar(char *cadena, const char* subcadena){
	char* posicionBarraCero = cadena + ContarCaracteres(cadena);
	Copiar(subcadena, posicionBarraCero);
}

void CadenaCaracteres::Mostrar(const char *cadena){
	cout<<cadena;
}
