#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;


typedef struct pilha{
	char* item;
	struct pilha *prox;	
}Pilha;

Pilha *topo = NULL;

Pilha* No(char *valor)   {
	Pilha *n = (Pilha*)malloc(sizeof(Pilha));
	n->item=valor;
	n->prox=NULL;
	return n;	
}

void push(char *n){
			Pilha *novo = No(n);
			if(topo == NULL){
				topo = novo;
			}else{
				novo->prox = topo;
				topo = novo;
			}
			
		}

int pilhaVazia(){
	if (topo==NULL)
	    return 1;
	return 0;
		}
		
char* pop(){
	if (!pilhaVazia()){
		char *valor = topo->item;
		Pilha *aux=topo;
		topo=topo->prox;
		free(aux);
		return valor;
		
	}
	
	
}

		
		

		



