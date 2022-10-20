#include <iostream>
#include "lista-encadeada-char.hpp"

using namespace std;


void substitui(Item letra_substuida, Item nova_letra, Lista lista){
    if(lista == NULL){
        return;
    }
    if(letra_substuida == lista->item){
        lista->item = nova_letra;
    }
    
    return substitui(letra_substuida, nova_letra, lista->prox);

}


int main(){
    Lista L = no('b',no('o',no('b',no('o',NULL))));
    exibe(L);
    substitui('o', 'a', L);
    exibe(L);
}