#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class No
{
public:
	int mat;
	char nome[23];
	No *prox;
	No *ant;
	No(int m, char n[23])
	{
		mat = m;
		strcpy(nome, n);
		prox = NULL;
		ant = NULL;
	}
};

class Lista
{
public:
	No *inicio;
	No *fim;

	Lista()
	{
		inicio = NULL;
		fim = NULL;
	}

	void addToFinal(int mat, char nome[23])
	{
		No *novo_no = new No(mat, nome);

		if (inicio == NULL)
		{
			inicio = novo_no;
		}
		if (inicio != NULL)
		{
			novo_no->ant = fim;
			fim->prox = novo_no;
		}
		fim = novo_no;
	}

	void addToIni(int mat, char nome[23])
	{
		No *novo_no = new No(mat, nome);

		if (inicio == NULL)
		{
			fim = novo_no;
		}
		if (inicio != NULL)
		{
			novo_no->prox = inicio;
			inicio->ant = novo_no;
		}
		inicio = novo_no;
		novo_no->ant = NULL;
	}

	void addOrd(int mat, char nome[23])
	{
		No *no_atual = inicio;
		No *novo_no = new No(mat, nome);
		if (inicio == NULL)
		{
			addToIni(mat, nome);
		}
		else
		{
			if (mat >= fim->mat)
			{
				addToFinal(mat, nome);
			}
			else if (mat <= inicio->mat)
			{
				addToIni(mat, nome);
			}
			else
			{
				while (mat > no_atual->mat)
				{
					no_atual = no_atual->prox;
				}
				no_atual = no_atual->ant;
				novo_no->ant = no_atual;
				novo_no->prox = no_atual->prox;
				no_atual->prox = novo_no;
				novo_no->prox->ant = novo_no;
			}
		}
	}

	// mostra todos os elementos do inicio ao final da lista
	void mostraIniFim()
	{
		No *no_atual = inicio;

		while (no_atual != NULL)
		{
			cout << "Matricula: " << no_atual->mat << " e Nome:" << no_atual->nome << endl;
			no_atual = no_atual->prox;
		}
	}

	// mostra todos os elementos do final ao inicio da lista
	void mostraFimIni()
	{
		No *no_atual = fim;

		while (no_atual != NULL)
		{
			cout << "Matricula: " << no_atual->mat << " e Nome:" << no_atual->nome << endl;
			cout << no_atual->ant->nome << endl;
			no_atual = no_atual->ant;
		}
	}

	int removerFinal()
	{

		if (!isEmpty())
		{
			No *no_aux = fim;
			fim = no_aux->ant;
			fim->prox = NULL;
			free(no_aux);
			delete (no_aux);
			return 1;
		}

		return 0;
	}

	int removerInicio()
	{
		if (!isEmpty())
		{
			No *no_aux = inicio;
			inicio = no_aux->prox;
			inicio->ant = NULL;
			free(no_aux);
			delete (no_aux);
			return 1;
		}

		return 0;
	}
	int remover(int matriculaBuscada)
	{
		No *no_atual = inicio;

		while (no_atual != NULL)
		{
			if (no_atual->mat != matriculaBuscada)
			{
				no_atual = no_atual->prox;
			}
			else
			{
				if (no_atual->ant == NULL)
				{
					inicio = no_atual->prox;
					inicio->ant = NULL;
				}
				else if (no_atual->prox == NULL)
				{
					fim = no_atual->ant;
					fim->prox = NULL;
				}
				else
				{
					no_atual->ant->prox = no_atual->prox;
					no_atual->prox->ant = no_atual->ant;
				}
				free(no_atual);
				delete (no_atual);
				return 1;
			}
		}
		return 0;
	}

	int isEmpty()
	{
		return inicio == NULL;
	}
};
int main()
{
	Lista *l = new Lista();

	l->addOrd(1, "Joana Oliveira");
	l->addOrd(10, "Cristiano Oliveira");
	// l->mostra();
	l->addOrd(8, "Joao");
	l->addOrd(4, "Fabio");
	l->mostraIniFim();
	// l->mostraFimIni();
	if (l->remover(4) == 1)
		cout << "Elemento removido!!" << endl;
	else
		cout << "Elemento nao encontrado!!" << endl;
	l->mostraIniFim();
	return 0;
}
