//Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele
//corresponde.

#include <iostream>


using namespace std;

main(){
	int horas, semanas, dias;
	
	cout<<"Insira o valor em horas: ";
	cin>>horas;
	
	semanas = horas / (24*7);
	
	horas = horas - semanas * (24*7);
	
	dias = trunc(horas/24);
	
	horas = horas - dias * 24;
	
	cout<<semanas<<" Semanas, "<<dias<<" dias e "<<horas<<" horas";	
	
}
