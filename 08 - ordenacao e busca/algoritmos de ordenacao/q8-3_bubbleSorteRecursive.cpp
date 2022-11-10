#include <iostream>
#include <string.h>

using namespace std;

#define troca(a, b)  \
    {                \
        int aux = a; \
        a = b;       \
        b = aux;     \
    }










int empurra(int vetor[], int numElementos)
{
    int trocou = 0;
    cout << "veio aqui com " << numElementos << " elementos" << endl;
    for (int i = 0; i < numElementos; i++)
    {
        if (vetor[i] > vetor[i + 1])
        {
            troca(vetor[i], vetor[i + 1]);
            trocou = 1;
        }
    }
    return trocou;
}

void bubble_sort(int vetor[], int numElementos)
{
    if (empurra(vetor, numElementos - 1))
    {
        bubble_sort(vetor, numElementos - 1);
    }
    return;
}

int main()
{
    int vetor[] = {2, 3, 7, 100, 2, 7, 3, 8, 5, 9, 0, 8, 7, 8, 9};
    troca(vetor[2], vetor[3]);
    int num_elementos = (sizeof(vetor)) / sizeof(int);

    bubble_sort(vetor, num_elementos);

    for (int i = 0; i < num_elementos; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}
