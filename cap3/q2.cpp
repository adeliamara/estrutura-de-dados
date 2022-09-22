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
		if(e[i]=='(') push('(', P);
		else if(isdigit(e[i]) || e[i]=='.')	s[j++]= e[i];
		else if(strchr("+-/*", e[i])){
			s[j++] = ' ';
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

float valor(char *e){
	Pilha P = cria_pilha(256);
	
	for(int i = 0; e[i]; i++)
		if(isdigit(e[i])){
			push(atof(e+i),P);
		   	while(isdigit(e[i+1]) || e[i+1]=='.') i++;
	   	}
		else if(strchr("+*-/",e[i])){
			float y = pop(P);
			float x = pop(P);
			switch(e[i]){
				case '+': push(x+y, P); break;
				case '-': push(x-y, P); break;
				case '*': push(x*y, P); break;
				case '/': push(x/y, P); break;
		   	}
		}
	float z = pop(P);
	destroip(&P);
	return z;
}


int main(void){
	char e[256];
	printf("Infixa?");
	gets(e);
   	char  *forma_posfixa =posfixa(e);
   	cout<<forma_posfixa<<endl;
   	float result = valor(forma_posfixa);
	cout<<result;
	return 0;
}