#include <iostream>
#include "lista-encadeada-int.hpp"
using namespace std;

int ocorrencias(int elemento_buscado, Lista lista){
    if(lista == NULL){
        return 0;
    } 
    if(elemento_buscado == lista->item){
        return 1 + ocorrencias(elemento_buscado, lista->prox);
    }
    return ocorrencias(elemento_buscado, lista->prox);
}

int main(){
    Lista L = no(4,no(3,no(3,no(3,no(1,no(5,NULL))))));
    exibe(L);
    cout << ocorrencias(3, L);
}