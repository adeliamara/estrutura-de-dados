/* solucao dupla : Adelia Mara e Vitor Araujo*/

#include <iostream>
using namespace std;

#define troca(a, b) {int x = a; a = b; b = x; }

void insere(int item, int vetor[], int tamanho){
    while(tamanho > 0 && item < vetor[tamanho-1]){
        vetor[tamanho] =  vetor[tamanho-1];
        tamanho--;
    }
    vetor[tamanho] = item;
}

void insertion_sort(int vetor[], int tamanho, int i){
    if(i == tamanho) return;
    insere(vetor[i], vetor, i);
    insertion_sort(vetor, tamanho, i+1);
}

int main(){
    int vetor[] = {46, 38, 27, 19, 50, 2, 100, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    insertion_sort(vetor, tamanho, 0);

     for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << endl;
    }
      return 0;

}