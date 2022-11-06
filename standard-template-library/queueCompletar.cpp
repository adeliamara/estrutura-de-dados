#include <queue>
#include <iostream>
using namespace std;

template <class T>

class Queue : public queue<T>
{
protected:
	queue<T> fila;

public:
	T popQueue()
	{
		T tmp = fila.front();
		fila.pop();
		return tmp;
	}

	void popTodos()
	{
		while (!fila.empty())
		{
			cout << fila.front() << endl;
			fila.pop();

		}
	}

	void simulaPilha(T elemento)
	{
		Queue<T> fila_aux;
		if (fila.empty())
		{
			fila.push(elemento);
		}
		else
		{
			while (!fila.empty())
			{

				fila_aux.push(fila.front());
				fila.pop();
			}
			fila.push(elemento);
			while (!fila_aux.empty())
			{
				fila.push(fila_aux.front());
				fila_aux.pop();
			}
		}
	}
};

main()
{
	Queue<int> pilha;
	pilha.simulaPilha(1);
	pilha.simulaPilha(2);
	pilha.simulaPilha(3);
	pilha.popTodos();

}
