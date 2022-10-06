namespace CadenaCaracteres{
	// Precondicion: @destino es una cadena de caracteres. El tamano de destino es igual o mayor al de origen
	// Postcondcion: Copia @origen en @destino
	void Copiar(const char* origen, char*destino); //Finalmente deberia ser una linea codigo

	// Precondicion: @cadena es una cadena de caracteres
	// Postcondcion: Devuelve la cantidad de caracteres de @cadena
	int ContarCaracteres(const char *cadena);////Finalmente deberia ser 4 0 3 lineas de codigo

	// Precondicion: @cadena y @subcadena son cadena de caracteres. El tamano de @cadena es suficiente para agregar la @subcadena
	//Postcondicion: Agrega al final de @cadena la @subcadena
	void Concatenar(char *cadena,const char* subcadena);//Finalmente deberia ser una linea codigo

	void Mostrar(const char *cadena);
}
