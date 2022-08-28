#include <iostream>

using namespace std;
#define PI 3.14


int main(){
	float raio, comprimento;
	
	cout<<"Insira o raio: ";
	cin>>raio;
		
    comprimento = raio * (PI * 2);
    
    cout<<"O comprimento eh: ";
    cout<<comprimento;

	return 0;
}