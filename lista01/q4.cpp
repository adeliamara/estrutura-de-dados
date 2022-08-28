#include <iostream>

using namespace std;

int main()
{
    int numeroA;
    int numeroB;
    
    cout<<"Insira o numero A ";
    cin>>numeroA;
    
    cout<<"Insira o numero B ";
    cin>>numeroB;
    
    int quociente = numeroA / numeroB;
    int resto = numeroA % numeroB;
    
    cout<< "QUOCIENTE = " << quociente << endl;
    cout<< "RESTO = " << resto;

    return 0;
}