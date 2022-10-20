#include <iostream>
#include <cstdlib>

using namespace std;

typedef char Item;

typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

Lista no(Item novo_item, Lista lista_existente){
    Lista novo_no = (Lista)malloc(sizeof(struct  no));
    novo_no->item = novo_item;
    novo_no->prox = lista_existente;
    return novo_no;
}


void exibe(Lista lista){
    while(lista != NULL){
        cout << "Item:" << lista->item << endl;
        lista = lista->prox; //lista recebe o endereço do proximo no
    }
}

void concat(Lista *concatenada, Lista elementosAnexos){
        while(*concatenada != NULL){
            concatenada = &(*concatenada)->prox;
        }
        *concatenada = elementosAnexos;
}

void destroi(Lista *lista){
    while(*lista != NULL){
        Lista no_destruido = *lista;
        *lista = no_destruido->prox;
        free(no_destruido);
    }
}

int length(Lista lista){
    if(lista == NULL){
        return 0;
    }
    return 1 + length(lista->prox);
}

int find(Item x, Lista lista){
    if(lista == NULL){
        return 0;
    }
    if(x == lista->item){
        return 1;
    }
    return find(x, lista->prox);
}

Lista clone(Lista listaCopiada){
    if(listaCopiada == NULL ){
        return NULL;
    }
    return no(listaCopiada->item, clone(listaCopiada->prox));
}

void exibe_inv(Lista lista){
    if(lista != NULL){
        exibe_inv(lista->prox);
        cout << "Elemento: " << lista->item << endl;
    }
}


