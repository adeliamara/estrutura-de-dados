#include <stdio.h>
#include <iostream>
using namespace std;

#define troca(a, b) {int x = a; a = b; b = x; }

int particiona (int *vetor, int inicio, int u) {
    int x = vetor[inicio];
    inicio--;
    u++;
    while(inicio<u){
        do u--; while(vetor[u]>x);
        do inicio++; while(vetor[inicio]<x);
        if (inicio < u) troca(vetor[inicio], vetor[u]);
    }
    return u;
}

void quickSort(int *vetor, int inicio, int u){
    if(inicio >= u) return;
    int meio = particiona(vetor, inicio, u);
    quickSort(vetor, inicio, meio);
    quickSort(vetor, meio+1, u);
}
int main()
{
   int vetor[7] = {72,69,51,46,33,28,15};
   int i;
   quickSort(vetor, 0, 6);
   printf("\n2.Vetor ordenado:\n");
   for (i = 0; i <= 6; i++)
   {
      printf("%d ", vetor[i]);
   }
   printf("\n");
}
