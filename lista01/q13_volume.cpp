#include <iostream>
#include <math.h>

using namespace std;
#define PI 3.14


int main(){
	float raio, volume;
	
	cout<<"Insira o raio: ";
	cin>>raio;
		
    volume = (4 * PI * pow(raio,3))/3;
    
    cout<<"O volume eh: ";
    cout<<volume;

	return 0;
}