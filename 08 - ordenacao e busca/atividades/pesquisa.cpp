#include<stdio.h>
#include<iostream>
#include <string.h>

using namespace std;
bool binarySearch(int item_buscado, int v[], int n, int u)
{
    int ponto_medio = (u + n) / 2;

    if (item_buscado == v[ponto_medio])
    {
        return true;
    }

    if (item_buscado < v[ponto_medio])
    {
        n = ponto_medio - 1;
    }
    else
    {
        u = ponto_medio + 1;
    }

    if (n < u)
    {
        return false;
    }

    return binarySearch(item_buscado, v, n, u);
}

int linear_search(int item, int vetor[], int tamanho)
{
    if (item == vetor[tamanho - 1])
    {
        return true;
    }
    if (tamanho - 1 == 0)
    {
        return false;
    }
    return linear_search(item, vetor, --tamanho);
}

int main(){
   int tamanho = 5;
   int vetor[tamanho];
   for (int i = 0; i < tamanho; i++)
   {
      cin >> vetor[i];
   }

     if (linear_search(-5, vetor, tamanho))
    {
        cout << "item encontrado" << endl;
    }
    else
    {
        cout << "item nao encontrado" << endl;
    }

    if (binarySearch(6, vetor, tamanho, 0))
    {
        cout << "item encontrado" << endl;
    }
    else
    {
        cout << "item nao encontrado" << endl;
    }

         
}


