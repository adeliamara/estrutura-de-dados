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
		//fim->prox = NULL;
	}

	Itemp pop()
	{
		Itemp elemento_retornado;

		if (!isEmpty())
		{
			elemento_retornado = inicio->nome;
			No *aux = inicio;
			if(inicio == fim){
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

	void destroi(){
		while(!isEmpty()){
			pop();
		}
	}
};

int main()
{

	Fila *fila_teste = new Fila();

	fila_teste->push('a');
	fila_teste->push('d');
	fila_teste->push('e');
	fila_teste->push('l');
	fila_teste->push('a');

	while (!(fila_teste->isEmpty())){
		cout<<fila_teste->pop()<<endl;
		cout<<"inicio: "<< fila_teste->inicio<<endl;
		cout<<"final->prox: "<< fila_teste->fim<<endl;
	}

	if(fila_teste->isEmpty()) cout << "limpou"<<endl;



	//AGORA COM DESTROI
	Fila *fila_teste1 = new Fila();

	fila_teste1->push('a');
	fila_teste1->push('d');
	fila_teste1->push('e');
	fila_teste1->push('l');
	fila_teste1->push('a');

    fila_teste1->destroi();

	if(fila_teste->isEmpty()) cout << "limpou com destroi";
	return 0;
}
