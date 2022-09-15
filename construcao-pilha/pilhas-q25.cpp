#include <iostream>
#include ".\pilha-v1.cpp"

using namespace std;

int check_string_ok(string texto){
	int tamanho;
	tamanho = texto.length();
	cout<<texto<<endl;
    Pilha pilha_in = cria_pilha(tamanho);
	
    for(int i=0; i < tamanho; i++){
		if(texto[i] == '[' || texto[i] == '(' || texto[i] == '{'){
			push(texto[i], pilha_in);
			cout<<topo(pilha_in)<<endl;
		}
		if(texto[i] ==')'){
			if(!(pop(pilha_in) == '(')) return 0;
		}else if(texto[i] =='}'){
			if(!(pop(pilha_in) == '{')) return 0;
		}else if(texto[i] ==']'){
			if(!(pop(pilha_in) == '[')) return 0;
		}
	}
	
	return vaziap(pilha_in);
}


int main(){
	
	string string_texto = "({})";
	
	if((check_string_ok(string_texto))==1 ){
		cout<<"ok";
	}else {
		cout<<"nok";	
	}
	
	
	return 0;
}