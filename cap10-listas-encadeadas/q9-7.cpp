#include <iostream>
#include "lista-encadeada-char.hpp"

using namespace std;


int isEqual(Lista listaA, Lista listaB){
    if(listaA == NULL && listaB == NULL){
        return 1;
    }
    if(listaA == NULL || listaB == NULL){
        return 0;
    }
    if(listaA->item == listaB->item){
        return isEqual(listaA->prox, listaB->prox);
    }
    return 0;

}


int main(){
    Lista listaA = no('b',no('o',no('b',no('o',NULL))));
    Lista listaB = no('b',no('o',no('b',NULL)));
    exibe(listaA);
    exibe(listaB);
    cout << "eh igual? " << isEqual(listaA, listaB) << endl;

    return 0;
}