#include <iostream>
#include "./pilha-v1.cpp"


using namespace std;

int ordernar_sequencia(Pilha pilhaA, Pilha pilhaB){
	Itemp item;
	Itemp anterior;
	
	for(int i = 0; i < pilhaA->max;i++){
		cout<<"item "<<i<<": "<<endl;
		cin>>item;
		
		anterior = (i==0) ? item : pilhaA->item[pilhaA->topo];
		
		
		while(item>anterior){
			push(pop(pilhaA), pilhaB);
			anterior = pilhaA->item[pilhaA->topo];
		}
			push(item, pilhaA);
		while(!vaziap(pilhaB)){
			item = pop(pilhaB);
			push(item, pilhaA);
		}
	}
	
	return 0;
}


int main(){
	int tamanho;
	cout<<"Quantos elementos terá a pilha?"<<endl;
	cin>>tamanho;
	
	Pilha pilhaA = cria_pilha(tamanho);
    Pilha pilhaB = cria_pilha(tamanho);
    
    ordernar_sequencia(pilhaA, pilhaB);
    
   	cout<<"ordenacao:"<<endl<<endl;
    for(int i = 0; i < tamanho; i++){
    	cout<<pop(pilhaA)<<endl;
	}
	return 0;
}