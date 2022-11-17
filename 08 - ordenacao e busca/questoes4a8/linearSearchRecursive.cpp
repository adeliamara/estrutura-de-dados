/* solucao da dupla : Adelia Mara e Vitor Araujo*/

#include <iostream>
using namespace std;

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

int main()
{
    int vetor[] = {46, 38, 27, 19, 50, 2, 100, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    if (linear_search(-5, vetor, tamanho))
    {
        cout << "item encontrado" << endl;
    }
    else
    {
        cout << "item nao encontrado" << endl;
    }

    if (linear_search(3, vetor, tamanho))
    {
        cout << "item encontrado" << endl;
    }
    else
    {
        cout << "item nao encontrado" << endl;
    }
    return 0;
}