#include <iostream>

using namespace std;

int main()
{
    float velocidade_ms;
    float velocidade_km;
    
    cout<<"Insira a velocidade em km/h: ";
    cin>>velocidade_km;
    
    velocidade_ms =  velocidade_km / 3.6;
    
    cout<<velocidade_ms;

    return 0;
}