#include <iostream>
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

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    if (binarySearch(6, vetor, tamanho, 0))
    {
        cout << "item encontrado" << endl;
    }
    else
    {
        cout << "item nao encontrado" << endl;
    }
    if (binarySearch(11, vetor, tamanho, 0))
    {
        cout << "item encontrado" << endl;
    }
    else
    {
        cout << "item nao encontrado" << endl;
    }
    if (binarySearch(12, vetor, tamanho, 0))
    {
        cout << "item encontrado" << endl;
    }
    else
    {
        cout << "item nao encontrado" << endl;
    }
}