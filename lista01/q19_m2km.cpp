#include <iostream>
#include <math.h>

using namespace std;

main(){
	float valor_m, valor_km;
	
	cout<<"Insira o valor em m: ";
	cin>>valor_m;
	
	valor_km = trunc(valor_m / 1000);
	
	valor_m = valor_m - valor_km * 1000;
	
	cout<<"valor em km: ";
	cout<<valor_km<<endl;
	
		
	cout<<"valor em m: ";
	cout<<valor_m;
	
}