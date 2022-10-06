//============================================================================
// Name        : artefactos.cpp
// Author      : Maria Elisa Araya
// Version     : 1.0
//============================================================================

//Convención de nombramiento:
//Nombrar Estructuras  - Constantes - FDunciones: UpperCamelCase
//Nombrar variables - parametro de funciones: lowerCamelCase

#include <iostream>
using namespace std;


struct Version{ 
    int versionNumber = 0; 
    int releaseNumber = 0;
    int changeNumber = 0;
};

void ShowVersion(Version *version);
void NewVersion(Version *version);
void Release(Version *version);
void Commit(Version *version);

int main(void){
	Version *fileversion;
	fileversion = new Version;
	Commit(fileversion);
	Release(fileversion);
	NewVersion(fileversion);
	ShowVersion(fileversion);
	return 0;
}
void ShowVersion(Version *version){
	cout << version->versionNumber << endl;
	cout << version->releaseNumber << endl;
	cout << version->changeNumber << endl;
}

void NewVersion(Version *version){
	version->versionNumber++;
}

void Release(Version *version){
	version->releaseNumber++;
}

void Commit(Version *version){
	version->changeNumber++;
}