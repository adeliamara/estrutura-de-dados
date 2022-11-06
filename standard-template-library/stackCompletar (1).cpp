#include <stack>
#include <iostream>
using namespace std;

template <class T>
class Stack: public stack<T> {
	protected:
		stack<T> pilha;
	public:
	T popStack(){
		T tmp=pilha.top();
		pilha.pop();
		return tmp;
	}
	
	
	void popTodos(){
		while (!pilha.empty())
		{
			cout << pilha.top()<< endl;
			pilha.pop();

		}
    }
	
void simulaFila(T elemento)
	{
		Stack<T> pilha_aux;
		if (pilha.empty())
		{
			pilha.push(elemento);
		}
		else
		{
			while (!pilha.empty())
			{

				pilha_aux.push(pilha.top());
				pilha.pop();
			}
			pilha.push(elemento);
			while (!pilha_aux.empty())
			{
				pilha.push(pilha_aux.top());
				pilha_aux.pop();
			}
		}
	}
};

main()
{
	Stack<int> fila;
	fila.simulaFila(1);
	fila.simulaFila(2);
	fila.simulaFila(3);
	fila.popTodos();

}

