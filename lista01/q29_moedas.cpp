#include <iostream>

using namespace std;

int main(){
    
    int valor_saque, notas50, notas10, notas5, notas1, resto;
  
    cout<<"Entre com o valor a ser sacado: ";
    cin>>valor_saque;
    
    notas50 = valor_saque/50;
    resto = valor_saque%50;
    
    notas10 = resto/10;
    resto = resto%10;
    
    notas5 = resto/5;
    notas1 = resto%5;
    
    cout<<"notas de 50: "<<notas50<<endl;
    cout<<"notas de 10: "<<notas10<<endl; 
    cout<<"notas de 5: "<<notas5<<endl;
    cout<<"notas de 1: "<<notas1<<endl;  
	  
   return 0;
}
