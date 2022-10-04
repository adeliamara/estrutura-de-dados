#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef char Itemp;

class No
{ // cria a classe No, com atributos nome e um ponteiro ora Nó.
public:
	Itemp nome;
	No *prox;

	No(Itemp n)
	{ // CONSTUTOR
		nome = n;
		prox = NULL;
	}
};

class Fila
{
public:
	No *inicio; // variavel topo como ponteiro pra No
	No *fim;

	Fila()
	{ // CONSTRUTOR
		inicio = NULL;
		fim = NULL;
	}

	void push(Itemp n)
	{
		No *novo = new No(n);
		if (isEmpty())
		{
			inicio = novo;
		}
		else
		{
			fim->prox = novo;
		}
		fim = novo;
		// fim->prox = NULL;
	}

	Itemp pop()
	{
		Itemp elemento_retornado;

		if (!isEmpty())
		{
			elemento_retornado = inicio->nome;
			No *aux = inicio;
			if (inicio == fim)
			{
				fim = NULL;
				free(fim);
			}
			inicio = inicio->prox;
			free(aux);
			return elemento_retornado;
		}
	}

	int isEmpty()
	{
		if (inicio == NULL && fim == NULL)
		{
			return 1;
		}
		return 0;
	}

	void destroi()
	{
		while (!isEmpty())
		{
			pop();
		}
	}
};

