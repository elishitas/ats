#include "CadenaCaracteres.h"

using namespace CadenaCaracteres;

int main() {
	char texto[100];
	Copiar("Hola", texto);
	Concatenar(texto, " curso de AyP1!");
	Mostrar(texto);
	return 0;
}
