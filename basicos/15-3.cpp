#include<iostream>
#include<ctype.h>


using namespace std;

void calcular(){
	char a;
	cout<<"Suministre un caracter: ";cin>>a;
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
		if(islower(a)==0){
			cout<<"Es una vocal mayuscula"<<endl;
		}else{
			cout<<"Es una vocal minuscula"<<endl;
		}
	}else{
		cout<<"No es una vocal"<<endl;
	}
}

int main(){
	int resp=0;
	do{
		cout<<"1)Para iniciar el programa"<<endl;
		cout<<"2)Para cerrar el programa"<<endl;cin>>resp;
		if(resp==1){
			calcular();
		}
	}while(resp!=2);
	return 0;
}