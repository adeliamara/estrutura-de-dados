#include <iostream>
#include <ctype.h>
#include <string.h>
#include "pilha-v1.cpp"


using namespace std;


int prio(char o){
	switch(o){
		case '(': return 0;
		case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
	}
	
	return -1; //operador invalio
}


char *posfixa(char* e){
	static char s[256];
	int j = 0;
	Pilha P = cria_pilha(256);
	
	for(int i = 0; e[i]; i++)
	{
		cout<<topo(P)<<endl;
		if(e[i]=='(') push('(', P);
		else if(isalpha(e[i])) s[j++]= e[i];
		else if(strchr("+-/*", e[i])){
			while (!vaziap(P) && prio(topo(P)) >=prio(e[i]))
				s[j++] = pop(P);
			push(e[i], P);
		} 
		else if(e[i] == ')'){
			while(topo(P) != '(')
				s[j++] = pop(P);
			pop(P);
		}	
	}
    while(!vaziap(P))
    		s[j++] =  pop(P);
    s[j] = '\0';
    destroip(&P);
    return s;
}



int main(void){
	char e[256];
	printf("Infixa?");
	gets(e);
   	char  *forma_posfixa =posfixa(e);
   	cout<<forma_posfixa<<endl;
	return 0;
}