#include <iostream>

using namespace std;

int main()
{
    float velocidade_ms;
    float velocidade_km;
    
    cout<<"Insira a velocidade em m/s: ";
    cin>>velocidade_ms;
    
    velocidade_km =  velocidade_ms * 3.6;
    
    cout<<velocidade_km;

    return 0;
}