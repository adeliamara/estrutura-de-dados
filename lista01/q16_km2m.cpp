//16. Leia um valor em km, calcule e escreva o equivalente em m.

#include <iostream>

using namespace std;

main(){
	float velocidade_km, velocidade_m;
	
	cout<<"Insira a velocidade em km: ";
	cin>>velocidade_km;
	
	velocidade_m = velocidade_km * 1000;
	
	cout<<"Velocidade em metros: ";
	cout<<velocidade_m;
	
}