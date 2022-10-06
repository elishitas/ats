#include <iostream>
using namespace std;
#include "CadenaCaracteres.h"


int main() {
	char texto[100];
	Copiar("Hola", texto);
	Concatenar(texto, " curso de AyP1!");
	cout<<texto;
	return 0;
}