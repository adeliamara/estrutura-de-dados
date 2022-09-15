#include <stdio.h>
#include <iostream>
#include "pilha11.h"

using namespace std;



main(){
	
	Pilha *p1 = pilha(5);
	push('b',p1);
	push('c',p1);
	cout<<"1.."<<pop(p1)<<endl;
	cout<<"2.."<<pop(p1)<<endl;
	cout<<"3.."<<pop(p1)<<endl;
	
	//destroi(&p1);
	
	destroi(&p1);
	
	cout<<p1<<endl;
	   
	if (pilhaVazia(p1))
	   cout<<"A pilha esta vazia!";
	else
	   cout<<"A pilha nao esta vazia!";
	   
//	destroi(&p1);
	
	
}
