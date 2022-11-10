#include <iostream>
#include <string.h>

using namespace std;

void insere(char elemento, char vetor[], int numItens)
{
    while (numItens > 0 && elemento < vetor[numItens - 1])
    {
        vetor[numItens] = vetor[numItens - 1];
        numItens--;
    }
    vetor[numItens] = elemento;
}

void insertion_sort(char vetor[], int numItens)
{
    for (int i = 0; i < numItens; i++)
    {
        insere(vetor[i], vetor, i);
    }
}

int main()
{
    char vetor[] = {'e', 'f', 'a', 'm', 'b', 'z'};
    int num_elementos = sizeof(vetor) / sizeof(char);
    cout << num_elementos << endl;
    insertion_sort(vetor, num_elementos);
    for (int i = 0; i < num_elementos; i++)
    {
        cout << vetor[i] << endl;
    }

    return 0;
}
