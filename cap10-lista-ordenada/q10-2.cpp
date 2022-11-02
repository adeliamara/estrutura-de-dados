#include <iostream>
#include "./lista-encadeada-int.hpp"

using namespace std;

void insereCrescente(Item x, Lista *L){
    while(*L != NULL && (*L)->item < x) {
        L = &(*L)->prox;
    }
    *L = no(x, *L); //Valor atribuido ao ponteiro apontado por L

}

void insereDescrescente(Item x, Lista *L){
    while(*L != NULL && (*L)->item > x) {
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
    insereDescrescente(3, &lista);
    insereDescrescente(1, &lista);
    insereDescrescente(10, &lista);
    insereDescrescente(7, &lista);
    insereDescrescente(12, &lista);

    exibe(lista);
    return 0;
}