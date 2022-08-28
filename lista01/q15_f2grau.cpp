//(5 * t°F - 160) / 9).


#include <iostream>

using namespace std;


int main(){
	float temp_celsius, temp_f;
	
	cout<<"Insira a temperatura em F: ";
	cin>>temp_f;
		
    temp_celsius = (5 * temp_f - 160)/9;
    
    cout<<"A temperatura equivalente em °C eh: ";
    cout<<temp_celsius;

	return 0;
}