#include <stdio.h>
#include <iostream>
using namespace std;

void quickSort(int *vetor, int low, int high)
{
   int i = low;
   int j = high;
   int pivo = vetor[(i + j) / 2];
   int temp;

   while (i <= j)
   {
      while (vetor[i] < pivo)
         i++;
      while (vetor[j] > pivo)
         j--;
      if (i <= j)
      {
         temp = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = temp;
         i++;
         j--;
      }
   }
   if (j > low)
      quickSort(vetor, low, j);
   if (i < high)
      quickSort(vetor, i, high);
}

int main()
{
   int vetor[7] = {46,28,51,33,72,15,69};
   int i;
   quickSort(vetor, 0, 6);
   printf("\n2.Vetor ordenado:\n");
   for (i = 0; i <= 5; i++)
   {
      printf("%d ", vetor[i]);
   }
   printf("\n");
}
