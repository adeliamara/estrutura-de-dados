/* solucao da dupla : Adelia Mara e Vitor Araujo*/


#include <iostream>
using namespace std;

#define troca(a, b) {int x = a; a = b; b = x; }

int seleciona(int vetor[], int tamanho) {
    int i = 0;
    for(int j = 1; j < tamanho; j++){
        if(vetor[i] < vetor[j]) {
            i = j;
        }
    }
    return i;
}

void selection_sort(int vetor[], int tamanho){
    int posicao_maior_parcial = seleciona(vetor, tamanho);
    if(tamanho-posicao_maior_parcial <= 1) return;
    troca(vetor[posicao_maior_parcial], vetor[tamanho-1]);
    selection_sort(vetor, tamanho-1);
}

int main(){
    int vetor[] = {46, 38, 27, 19, 50, 2, 100, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    selection_sort(vetor, tamanho);

     for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << endl;
    }
      return 0;

}