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

class Pilha
{
public:
	No *topo; // variavel topo como ponteiro pra No

	Pilha()
	{ // CONSTRUTOR
		topo = NULL;
	}

	void push(Itemp n)
	{
		No *novo = new No(n);
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
			No *aux = topo;
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

	void destroi(){
		while(!isEmpty()){
			pop();
		}
	}

};

int main()
{

	Pilha *pilha_teste = new Pilha();
	pilha_teste->push('a');
	pilha_teste->push('b');
	pilha_teste->push('c');

	if(pilha_teste != NULL){
		cout<<"CRIOU"<<endl;
	}

	cout << pilha_teste->pop() << endl;

	pilha_teste->destroi();
	
	if(pilha_teste->isEmpty()){
		cout<<"FUNCIONOU"<<endl;
	}
}
