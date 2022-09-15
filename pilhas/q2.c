#include <stdio.h>
#include "C:\Users\nitro\Documents\IFPI\2022.2\estrutura-de-dados\pilhas\pilha1 (1).h"

int main(void){
 	Pilha P = pilha(100);
	empilha(8, P);
	while(topo(P)> 0) {
		printf("topo 3: %d\n", topo(P));
        printf("topo 3/2: %d\n", topo(P)/2);
		empilha(topo(P)/2,P);
	}
	while( !vaziap(P)) printf("%f\n",desempilha(P));
	return 0;
}


