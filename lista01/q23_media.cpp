#include <iostream>
#include <iomanip>

using namespace std;

main(){
	float n1,n2,n3, media;
	
	cout<<"Insira a n1: ";
	cin>>n1;
	
    cout<<"Insira a n2: ";
	cin>>n2;
	
    cout<<"Insira a n3: ";
	cin>>n3;
	
	
    media = (n1 + n2 + n3)/3;
    
    cout<<"A media eh: ";
    cout<< fixed << setprecision(3) << media;

	
}