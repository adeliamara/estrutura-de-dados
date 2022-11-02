#include <iostream>
#include "./lista-encadeada-int.hpp"

using namespace std;

void insere(Item x, Lista *L){
    while(*L != NULL && (*L)->item < x) {
        L = &(*L)->prox;
    }
    *L = no(x, *L); //Valor atribuido ao ponteiro apontado por L

}

void insereSemRepeticao(Item x, Lista *L){
    while(*L != NULL && (*L)->item < x) {
        L = &(*L)->prox;
    }
    if(*L == NULL || (*L)->item != x ){
        *L = no(x, *L); //Valor atribuido ao ponteiro apontado por L
    } 
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
    insereSemRepeticao(1, &lista);
    insereSemRepeticao(3, &lista);
    insereSemRepeticao(1, &lista);
    insereSemRepeticao(10, &lista);
    insereSemRepeticao(7, &lista);
    insereSemRepeticao(12, &lista);
    insereSemRepeticao(10, &lista);

    exibe_inv(lista);
    return 0;
}