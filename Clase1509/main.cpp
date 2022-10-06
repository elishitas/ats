#include <iostream>
using namespace std;

int main() {
	char texto[100];
	Copiar("Hola", texto);
	Concatenar(texto, " curso de AyP1!");
	cout<<texto;
	return 0;
}

const char FinCadena = '\0';

void Copiar(const char* origen, char*destino){
	while(*destino++ = *origen++);
}