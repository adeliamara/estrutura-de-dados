#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main(){
	#define concentracao_cobre 0.7
	#define concetracao_zinco 0.3
	
    float peso_total, peso_zinco, peso_cobre;

    cout<<"Insira o peso em kg do latao a ser produzido: ";
    cin>>peso_total;
    
    peso_zinco = peso_total * concetracao_zinco;
    peso_cobre = peso_total * concentracao_cobre;
    
    cout<<"cobre: "<<fixed<<setprecision(4)<<peso_cobre<<" kg"<<endl;
    cout<<"zinco: "<<fixed<<setprecision(4)<<peso_zinco<<" kg"<<endl;
    
    return 0;
}