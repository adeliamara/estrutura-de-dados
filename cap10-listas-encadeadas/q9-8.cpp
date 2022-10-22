#include <iostream>
#include "lista-encadeada-int.hpp"

using namespace std;

Item enesimo(int posicao, Lista lista){
    if(lista == NULL){
        return NULL;
    }
    if(posicao == 1) {
        return lista->item;
    }
    return enesimo(posicao-1, lista->prox);
}

int main(){
    Lista L = no(4,no(2,no(3,no(3,no(1,no(5,NULL))))));
    exibe(L);
 cout << enesimo(1,L) <<endl;
 cout << enesimo(2,L)<<endl;
 cout << enesimo(3,L)<<endl;
 cout << enesimo(4,L) <<endl;
cout << enesimo(5,L);
}