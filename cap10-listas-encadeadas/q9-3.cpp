#include <iostream>
#include "lista-encadeada-int.hpp"
using namespace std;

int ultimo(Lista lista){
    if(lista == NULL){
        return NULL;
    } 
    if(lista->prox != NULL){
        return ultimo(lista->prox);
    }
    return lista->item;
}

int main(){
    Lista L = no(4,no(2,no(3,no(3,no(1,no(5,NULL))))));
    exibe(L);
    cout << ultimo(L);
}