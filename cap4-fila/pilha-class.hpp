#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef char Itemp;

class No_pilha
{ // cria a classe No, com atributos nome e um ponteiro ora Nó.
public:
	Itemp nome;
	No_pilha *prox;

	No_pilha(Itemp n)
	{ // CONSTUTOR
		nome = n;
		prox = NULL;
	}
};

class Pilha
{
public:
	No_pilha *topo; // variavel topo como ponteiro pra No

	Pilha()
	{ // CONSTRUTOR
		topo = NULL;
	}

	void push(Itemp n)
	{
		No_pilha *novo = new No_pilha(n);
		if (topo == NULL)
		{
			topo = novo;
		}
		else
		{
			novo->prox = topo;
			topo = novo;
		}
	}

	Itemp pop()
	{
		Itemp elemento_retornado;

		if (!isEmpty())
		{
			elemento_retornado = topo->nome;
			No_pilha *aux = topo;
			topo = topo->prox;
			free(aux);
			return elemento_retornado;
		}
	}

	int isEmpty()
	{
		if (topo == NULL)
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

