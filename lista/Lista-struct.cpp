#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno
{
	int mat;
	string nome;
} Aluno;

Aluno lista[30];
int quantidade_elementos_atual = 0;

void incluirDesordenado(Aluno e)
{

	if (quantidade_elementos_atual < sizeof(lista) / sizeof(lista[0]))
	{
		lista[quantidade_elementos_atual] = e;
		quantidade_elementos_atual++;
	}
	else
	{
		cout << "lista cheia" << endl;
	}
}

// retorna a posicao do elemento procurado
int procura(int mat)
{
	int posicaoElemento = -1;
	for (int i = 0; i < quantidade_elementos_atual; i++)
	{
		if (lista[i].mat == mat)
		{
			posicaoElemento = i;
			break;
		}
	}

	return posicaoElemento;
}

// recebe a posicao e imprime o elemento na tela
void mostrar(int pos)
{
	if(pos < 0 || pos >= (sizeof(lista)/sizeof(lista[0]))){
		cout << "Posicao invalida" << endl;
	}else{
		cout << "matricula: " << lista[pos].mat << "\n Aluno: " << lista[pos].nome << endl;
	}
}

// procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat)
{
	int posicaoElemento;
	posicaoElemento = procura(mat);
	if (posicaoElemento == -1)
	{
		cout << "A matricula " << mat << "nao existe!" << endl;
	}
	else
	{
		cout << "matricula: " << lista[posicaoElemento].mat << "\n Aluno: " << lista[posicaoElemento].nome << endl;
	}
}

// estratï¿½gia 1: colocar o ultimo elemento da lista na posiï¿½ï¿½o do elemento removido
void remover00(int mat)
{
	int posicaoElemento;
	posicaoElemento = procura(mat);

	if (posicaoElemento != -1)
	{
		lista[posicaoElemento] = lista[quantidade_elementos_atual - 1];
		quantidade_elementos_atual--;
	}
	else
	{
		cout << 'O elemento nao existe na lista' << endl;
	}
}

// estratï¿½gia 2: mover TODOS os elementos que estï¿½o APï¿½S  o elemento que deve ser removido UMA POSIï¿½ï¿½O A FRENTE.
void remover01(int mat)
{
	int posicaoElemento;
	posicaoElemento = procura(mat);

	if (posicaoElemento != -1)
	{
		quantidade_elementos_atual--;
		for (int i = posicaoElemento; i < quantidade_elementos_atual; i++)
		{
			lista[posicaoElemento] = lista[posicaoElemento + 1];
		}
	}
	else
	{
		cout << 'O elemento nap existe na lista' << endl;
	}
}

main()
{
	Aluno aluno1;
	aluno1.mat = 1;
	aluno1.nome = "Paulo";

	Aluno aluno2;
	aluno2.mat = 2;
	aluno2.nome = "Marcos";

	Aluno aluno3;
	aluno3.mat = 3;
	aluno3.nome = "Matheus";

	Aluno aluno4;
	aluno4.mat = 4;
	aluno4.nome = "Maria";

	Aluno aluno5;
	aluno5.mat = 5;
	aluno5.nome = "Claudia";

	incluirDesordenado(aluno1);
	incluirDesordenado(aluno2);
	incluirDesordenado(aluno3);
	incluirDesordenado(aluno4);
	incluirDesordenado(aluno5);



	//Paulo
	consultar(1);
	//marcos
	consultar(2);

	//paulo
	mostrar(0);
	remover00(aluno1.mat);
	//claudia
	mostrar(0);

	remover01(aluno5.mat);
	mostrar(0); //marcos
	mostrar(1);	//matheus
	mostrar(2);	//maria

	consultar(5); //naoexiste


}
