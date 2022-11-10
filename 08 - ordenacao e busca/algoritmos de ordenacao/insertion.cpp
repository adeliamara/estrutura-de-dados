#include <iostream>
#include <string.h>


using namespace std;


void insere(int elemento, int vetor[], int numItens){
    while(numItens > 0 && elemento < vetor[numItens-1]){
        vetor[numItens] = vetor[numItens-1];
        numItens--;
    }
    vetor[numItens] = elemento;
}


void insertion_sort(int vetor[], int numItens){
    for(int i=0; i<numItens; i++){
        insere(vetor[i], vetor, i);
    }
}


