#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No
{
public:
	int matricula;
	char nome[23];
	No *prox;
	No(int mat, char n[23])
	{
		matricula = mat;
		strcpy(nome, n);
		prox = NULL;
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

	void addToFinal(int matricula, char nome[23])
	{
		No *novo = new No(matricula, nome);
		if (fim == NULL)
		{
			inicio = novo;
		}
		else
		{
			fim->prox = novo;
		}
		fim = novo;
	}

	int lista_vazia()
	{
		return (inicio == NULL);
	}

	void addToInicio(int matricula, char nome[23])
	{
		No *novo = new No(matricula, nome);

		if (lista_vazia())
		{
			inicio = novo;
			fim = novo;
		}
		else
		{
			novo->prox = inicio;
			inicio = novo;
		}
	}

	void mostra() // listar
	{
		if (lista_vazia())
		{
			cout << "\nLista vazia!!!";
		}
		else
		{
			No *no_atual = inicio;
			while (no_atual != NULL)
			{
				cout << "-------- Elemento: " << endl;
				cout << "Matricula: " << no_atual->matricula << "\nNome: " << no_atual->nome << endl;
				no_atual = no_atual->prox;
			}
			free(no_atual);
		}
	}

	int remove(int mat)
	{
		No *atual = inicio;
		No *anterior = NULL;

		while (atual != NULL)
		{
			if (atual->matricula == mat)
			{
				if (atual == inicio)
				{
					inicio = inicio->prox;
				}
				else
				{
					if (atual == fim)
					{
						fim = anterior;
						fim->prox = NULL;
					}
					else
					{
						anterior->prox = atual->prox;
					}
				}
				free(atual);
				return 1;
			}
			anterior = atual;
			atual = atual->prox;
		}
		return 0;
	}

	// auxiliar no metodo remove, vai
	// retornar o endereco do anterior
	No *busca(int mat)
	{
		No *no_atual = inicio;
		bool elementoExiste = false;
		while (no_atual != NULL)
		{
			if (no_atual->matricula == mat)
			{
				cout << "--- elemento buscado: " << endl;
				cout << "Matricula: " << no_atual->matricula
					 << "\nNome: " << no_atual->nome << endl;
				break;
			}

			no_atual = no_atual->prox;
		}
		free(no_atual);

		return NULL;
	}

	void removeTodos()
	{
		No *atual = inicio;
		No *proximo = NULL;
		while (atual != NULL)
		{
			proximo = atual->prox;
			cout << "\n Apaga:" << atual->nome;
			free(atual);
			atual = proximo;
		}
		inicio = atual;
	}

	// criar uma nova lista que seja o inverso da primeira
	Lista *crialistainversa()
	{
		Lista *lista_inversa = new Lista();
		No *atual = inicio;
		No *proximo = NULL;
		while (atual != NULL)
		{
			lista_inversa->addToInicio(atual->matricula, atual->nome);
			atual = atual->prox;
		}
		return lista_inversa;
	}

	// inverter a propria lista
	void listainvertida()
	{
		No *no_atual = inicio;
		No *elemento_destruido;

		int cont = 0;
		while (no_atual != NULL)
		{
			No *novo = new No(no_atual->matricula, no_atual->nome);
			if (cont == 0)
			{
				fim = novo;
				novo->prox = NULL;
			}
			else
			{
				novo->prox = inicio;
			}

			inicio = novo;
			elemento_destruido = no_atual;
			no_atual = no_atual->prox;
			free(elemento_destruido);
			cont++;
		}
	}
};

main()
{
	Lista *lista = new Lista();
	lista->addToFinal(1, "Joao");
	lista->addToFinal(2, "Gabriela");
	lista->addToFinal(3, "Fabiola");
	lista->addToInicio(5, "Joana Oliveira");
	lista->addToInicio(6, "Cristiano Oliveira");
	cout << "exibir" << endl;
	lista->mostra();

	cout << "\ninverte lista " << endl;
	lista->listainvertida();
	lista->mostra();

	cout << "\nteste adicionado: criar nova lista inversa" << endl;
	Lista *lista_inversa = lista->crialistainversa();
	lista_inversa->mostra();

	cout << "\nteste adicionado: removendo elemento de matricula 1" << endl;
	cout << "sucesso em remover: "<< lista->remove(1)<<endl;
	lista->mostra();

	cout << "\nteste adicionado: busca matricula 2" << endl;
	lista->busca(2);
}
