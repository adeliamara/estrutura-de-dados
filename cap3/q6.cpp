#include <iostream>
#include <ctype.h>
#include <string.h>
#include "pilha-v1.cpp"


using namespace std;


int prio(char o){
	switch(o){
		case '(': return 0;
        case '|': return 1;
        case '&': return 2;
        case '~': return 3;
	}
	
	return -1; //operador invalio
}

bool isOperator(Itemp c){
	return c == '~' || '&' || '|';
}

bool isOperating(Itemp c){
	return c == 'v' || c == 'V' || c == 'F' || c == 'f';
}

char *posfixa(char* e){
	static char s[256];
	int j = 0;
	Pilha P = cria_pilha(256);
	
	for(int i = 0; e[i]; i++)
	{
		cout<<topo(P)<<endl;
		if(e[i]=='(') push('(', P);
		else if(isOperating(e[i])) s[j++]= e[i];
		else if(strchr("~&|", e[i])){
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


int isTrue(char y){
	return y =='V' || y =='v';
}

char convertBoolToChar(int i){
	if(i == 1){
		return 'V';
	}
	return 'F';
}

char valor(char *e){
	Pilha P = cria_pilha(256);
	
	for(int i = 0; e[i]; i++)
		if(isOperating(e[i])) push(e[i], P);
		
		else {
			char y = pop(P);
			char x;
		    y = isTrue(y);
		    if(e[i] != '~'){
                x = pop(P);
    			x = isTrue(x);
			}
			switch(e[i]){
				case '~': push(convertBoolToChar(!y), P); break;
				case '|': push(convertBoolToChar(x||y), P); break;
				case '&': push(convertBoolToChar(x&y), P); break;
		   	}
		}
	char z = pop(P);
	destroip(&P);
	return z;
}



int main(void){
	char e[256];
	printf("Infixa?");
	gets(e);
   	char  *forma_posfixa =posfixa(e);
   	cout<<"forma_posfixa: "<<forma_posfixa<<endl;
   	char result = valor(forma_posfixa);
    cout<<"valor: "<<result<<endl;
	return 0;
}