#include "fila-class.hpp"
#include "pilha-class.hpp"
#include <ctype.h>
#include <iostream>

using namespace std;

int main(){
    string s;
    Pilha *pilha = new Pilha();
	Fila *fila = new Fila();

    cout << "\nfrase? "<<endl;
    getline(cin,s);
    cout << s << endl;

    for (int i = 0; s[i]; i++)
    {
        if(isalpha(s[i])){
            pilha->push(s[i]);
            fila->push(s[i]);
        }
    }

    while(!fila->isEmpty() && toupper(fila->pop()) == toupper(pilha->pop()) );
    if(fila->isEmpty()) cout << "a frase eh palidroma " << endl;
    else cout << " a frase nao eh palidroma";

    fila->destroi();
    pilha->destroi();
    
    return 0;
}