
#include <iostream>
#include <math.h>

using namespace std;

main(){
	int minutos, horas, semanas, dias;
	
	cout<<"Insira o valor em minutos: ";
	cin>>minutos;
	
	semanas = minutos / (24*7*60);
	minutos = minutos - semanas * (24*7*60);
	dias = minutos/(24*60);
	minutos = minutos - dias * (24*60);
	horas = minutos / 60;
	minutos = minutos - (horas * 60);
	
	cout<<semanas<<" Semanas, "<<dias<<" dias, "<<horas<<" horas e "<<minutos<<" minutos"<<endl;	
	
}
