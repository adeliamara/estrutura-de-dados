#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;


int main(){
    int anos, cigarros_por_dia, total_fumado;
    
    float valor_total, preco_carteira;

    cout<<"Insira a quantidade de anos: ";
    cin>>anos;
    
    cout<<"Insira a quantidade cigarros fumados por dia: ";
    cin>>cigarros_por_dia;
    
    cout<<"Insira o preco da carteira: ";
    cin>>preco_carteira;
    
    
	total_fumado = anos * cigarros_por_dia * 365;
	
	valor_total = trunc(total_fumado/20);
	
	if(total_fumado % 20 > 0){
		valor_total++;
	}
	
    cout<<total_fumado<<" cigarros fumados"<<endl;
    cout<<"R$ "<<fixed<<setprecision(2)<<valor_total;
    
    return 0;
}