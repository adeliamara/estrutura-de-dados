#include <stdlib.h>
#include<stdio.h> 


typedef char Itemp;

typedef struct pilha{
	int max;
	int topo;
	Itemp *item;
} *Pilha;

Pilha cria_pilha(int m){
	Pilha P = (Pilha)malloc(sizeof(struct pilha));
	P->max = m;
    P->topo = -1;
    P->item = (Itemp *)malloc(m*sizeof(Itemp));
    return P;
}

int vaziap(Pilha P){
	return P->topo == -1;
}

int cheiap(Pilha P){
	return P->topo == P->max-1;
}

void push(Itemp x, Pilha P){
	if(cheiap(P)) {
		puts("pilha cheia!");
		abort();
	}
	P->topo++;
	P->item[P->topo] = x;
}

Itemp pop(Pilha P){
	if(vaziap(P)){
		puts("pilha VAZIA!");
		abort();
	}
	Itemp x =P->item[P->topo];
	P->topo--;
	return x;
}

Itemp topo(Pilha P){
	return P->item[P->topo];
}

void destroip(Pilha *Q){
	free((*Q)->item);
	free(*Q);
	*Q = NULL;
}