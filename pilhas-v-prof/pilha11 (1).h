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

int pilhaCheia(Pilha *p){
	if (p->topo==p->max-1)
	    return 1;
	return 0;
		
}



int pilhaVazia(Pilha *p){
	if (p==NULL)
	    return 1;
    if (p->topo==-1) 
	       return 1;
	return 0;
		
}

				
void push(char n,Pilha *p){
	if (!pilhaCheia(p)){
		p->topo++;
	    p->item[p->topo]=n;
	    }
	
  }
		
char pop(Pilha *p){
	if (!pilhaVazia(p)){
		char v = p->item[p->topo];
	    p->topo--;
	    return v;
	}
		
}

void destroi(Pilha** p){
	free((*p)->item);
	free(*p);
	*p=NULL;
	
	
	
}
		


char getTopo(Pilha *p){
	return p->item[p->topo];
}
		
