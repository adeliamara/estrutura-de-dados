#include <stdio.h>
#include "C:\Users\nitro\Documents\IFPI\2022.2\estrutura-de-dados\pilhas\pilha1 (1).h"

int main(void){
	Pilha P = pilha(3);
	empilha(1, P);
	empilha(2, P);
	printf("%d\n", desempilha(P));
    printf("%d\n", desempilha(P));
    printf("%d\n", desempilha(P));
    
    destroip(P);
    
    if (vaziap(P)==1){
		printf("A pilha esta vazia!");
	} else{
		printf("A pilha nao esta vazia!");
	}
	
	return 0;
}


