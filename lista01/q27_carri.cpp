#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main(){
	#define taxa_imposto 0.45
	#define taxa_distribuidor 0.28
	
    float custo_fabrica, valor_imposto, valor_distribuidor, valor_total;

    cout<<"Insira o custo de fabrica: ";
    cin>>custo_fabrica;
    
    valor_imposto = custo_fabrica * taxa_imposto;
    valor_distribuidor = custo_fabrica * taxa_distribuidor;
    
    valor_total = custo_fabrica + valor_imposto + valor_distribuidor;
    

    cout<<"R$ "<<fixed<<setprecision(2)<<valor_total;
    
    return 0;
}