#include <iostream>
#include <cstring>
using namespace std;

// Precondición: @origen es una cadena de caracteres @destino es una cadena de caracteres.
// Postcondición: La función copiara la cadena de caracteres @origen en la cadena de caracteres @destino.
void Copiar(char origen[], char destino[]);

int main(){
    char origen[] = "Hola";
    char destino[] = "mundo";
    cout<<"Origen: "<<origen<<" Destino: "<<destino<<endl;
    Copiar(origen, destino);
    cout<<"Origen: "<<origen<<" Destino: "<<destino<<endl;
    return 0;
}

void Copiar(char origen[], char destino[]){
    int i=0;
    while (origen[i] != '\0'){
        destino[i] = origen[i]; 
        i++;
    }
    destino[i] = '\0'; 
}