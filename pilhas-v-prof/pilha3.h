#include <stdio.h>
#include <stdlib.h>


int max=50;
char item[50];
int topo=-1;

void push(char n){
	if (topo != (max-1))
	   item[++topo]=n;		
}
		
char pop(){
	
}

int pilhaVazia(){
		
		}
		
int pilhaCheia(){
		
		}
		

char getTopo(){
	return item[topo];
	
}
		
