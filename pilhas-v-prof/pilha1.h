#include <stdio.h>
#include <stdlib.h>


typedef struct pilha{
	int max;
	int topo;
	char *item;
	
}Pilha;

Pilha* pilha(int m){
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->max=m;
	p->topo=-1;
	p->item=(char*)malloc(m*sizeof(char));
	return p;	
}

void push(char n){
		
		
		
		}
		
char pop(){
	
}

int pilhaVazia(){
		
		}
		
int pilhaCheia(){
		
		}
		
void destroi(Pilha *p){
	
}

char getTopo(Pilha p){
	
	
}
		
