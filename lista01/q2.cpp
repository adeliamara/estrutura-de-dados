#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    float valor_dolar;
    float conversao_dolar2real = 5;
    float valor_real;
    
    cout<<"Insira o valor em dolar: ";
    cin>> valor_dolar;
    valor_real = valor_dolar;

    
    cout << fixed << setprecision(3) << valor_real;

    return 0;
}
