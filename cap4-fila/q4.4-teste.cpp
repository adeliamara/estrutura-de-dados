#include "fila-class.hpp"
#include <ctype.h>
#include <iostream>
#define tempo 3

using namespace std;

int main(){
    string s;
	Fila *fila1 = new Fila();

    fila1->push(17);
    fila1->push(25);
    fila1->push(39);
    fila1->push(46);
     int i = 0;
    while(!fila1->isEmpty()){
        i++;
        cout<<"execucao "<<i<<endl;
        int x = fila1->pop();
        int p = x/10;
        int t = x%10;
        cout <<"x: "<<x<<endl;
        cout<< "p: "<<p<<endl;
        cout<< "t: "<<t<<endl;
        if(t>3){
			fila1->push(p*10 + (t-tempo));
		} else{
			cout<<"processo "<<p<<" concluido"<<endl;
		} 
    }

    fila1->destroi();
    
    return 0;
}

