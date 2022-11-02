#include <iostream>
#include "./lista-encadeada-int.hpp"

using namespace std;

void insere(Item x, Lista *L){
    while(*L != NULL && (*L)->item < x) {
        L = &(*L)->prox;
    }
    *L = no(x, *L); //Valor atribuido ao ponteiro apontado por L

}


void remove(Item x, Lista *L){
    while(*L != NULL && (*L)->item < x) {
        L = &(*L)->prox;
    }
    if(*L == NULL || (*L)->item > x) return;
    Lista n = *L;
    *L = n->prox;
}

int main(){
    Lista lista = NULL;
    insere(3, &lista);
    insere(1, &lista);
    insere(10, &lista);
    insere(7, &lista);
    insere(12, &lista);

    exibe_inv(lista);
    return 0;
}