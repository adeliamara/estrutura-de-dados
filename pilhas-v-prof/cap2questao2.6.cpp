#include <stdio.h>
#include <string.h>
#include <iostream>
#include "pilha22.h"
using namespace std;

main(){
	
	char* s;
	for (int i=1;i<=3;i++){
		printf("?");
		gets(s);
				
		push(strdup(s));
	   //push(s);
	    
	}
	cout<<pop()<<endl;
	cout<<pop()<<endl;
	cout<<pop()<<endl;
	
	
	
	
	return 0;
	
}
