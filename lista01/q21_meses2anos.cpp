//Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.

#include <iostream>

using namespace std;

main(){
	int meses, anos;
	
	cout<<"Insira o valor em meses: ";
	cin>>meses;
	
	anos = meses / 12;
	
	meses = meses - anos * 12;
	
	
	cout<<anos<<" anos e "<<meses<<" meses";	
	
}
