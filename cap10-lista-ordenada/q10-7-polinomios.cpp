#include <iostream>
#include "./lista-encadeada-int.hpp"

using namespace std;

typedef struct polinomio
{
    float coeficiente;
    int expoente;
    struct polinomio *proximo;
} * Polinomio;

Polinomio cria_termo_polinomio(float coeficiente, int expoente, Polinomio polinomio)
{
    Polinomio novo_termo = (Polinomio)malloc(sizeof(struct polinomio));
    novo_termo->coeficiente = coeficiente;
    novo_termo->expoente = expoente;
    novo_termo->proximo = polinomio;
    return novo_termo;
}

void exibe_polinomio(Polinomio polinomio)
{
    if (polinomio == NULL)
    {
        cout << endl;
        return;
    }
    cout << "+" << polinomio->coeficiente;
    if (polinomio->expoente != 0)
    {
        cout << "x^" << polinomio->expoente;
    }
    exibe_polinomio(polinomio->proximo);
}

void adicao_termo(float coeficiente, int expoente, Polinomio *polinomio)
{
    if (*polinomio == NULL || (*polinomio)->expoente < expoente)
    {
        *polinomio = cria_termo_polinomio(coeficiente, expoente, *polinomio);
    }
    else if ((*polinomio)->expoente == expoente)
    {
        (*polinomio)->coeficiente += coeficiente;
        if ((*polinomio)->coeficiente == 0)
        {
            Polinomio n = *polinomio;
            *polinomio = n->proximo;
            free(n);
        }
    }
    else
        adicao_termo(coeficiente, expoente, &(*polinomio)->proximo);
}

Polinomio somaDePolinomios(Polinomio *polinomio_a, Polinomio *polinomio_b)
{
    Polinomio polinomio_aux = *polinomio_a;
    while (*polinomio_a != NULL)
    {
        adicao_termo((*polinomio_a)->coeficiente, (*polinomio_a)->expoente, &(*polinomio_b));
        *polinomio_a = (*polinomio_a)->proximo;
    }

    *polinomio_a = polinomio_aux;
    return *polinomio_b;
}

int main()
{
    Polinomio polinomio_a = cria_termo_polinomio(4, 6, cria_termo_polinomio(3, 5, cria_termo_polinomio(-6, 2, cria_termo_polinomio(1, 0, NULL))));
    Polinomio polinomio_b = cria_termo_polinomio(5, 7, cria_termo_polinomio(3, 3, cria_termo_polinomio(6, 2, cria_termo_polinomio(1, 0, NULL))));

    exibe_polinomio(polinomio_a);
    exibe_polinomio(polinomio_b);

    Polinomio polinomio_resultante = somaDePolinomios(&polinomio_a, &polinomio_b);
    exibe_polinomio(polinomio_resultante);

    return 0;
}