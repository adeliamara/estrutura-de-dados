#include <iostream>
#include "lista-encadeada-int.hpp"
using namespace std;


int soma(Lista lista){
    if(lista == NULL){
        return 0;
    }
    if(lista->prox != NULL){
        return lista->item + soma(lista->prox);
    }
    return lista->item;
}


int main(){
    Lista L = no(4,no(2,no(3,no(3,no(1,no(5,NULL))))));
    exibe(L);
    cout << soma(L);
}