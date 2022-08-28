//tf= (9 * t°C + 160) / 5)


#include <iostream>

using namespace std;


int main(){
	float temp_celsius, temp_f;
	
	cout<<"Insira a temperatura em celsius: ";
	cin>>temp_celsius;
		
    temp_f = (9 * temp_celsius + 160)/5;
    
    cout<<"A temperatura equivalente em °F eh: ";
    cout<<temp_f;

	return 0;
}