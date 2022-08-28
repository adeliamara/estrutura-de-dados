#include <iostream>

using namespace std;

int main(){
    
    int valor_total, entrada, parcelas;
  
    cout<<"Entre com o valor total: ";
    cin>>valor_total;
    
    parcelas = valor_total/3;
    entrada  = valor_total%3 + parcelas;

    
    cout<<"entrada de : "<<entrada<<endl;
    cout<<"parcelas de : "<<parcelas;
 
	  
   return 0;
}
