#include <iostream>
#include <iomanip>

using namespace std;

main(){
	float n1,n2,n3, p1, p2, p3, media;
	
	cout<<"Insira a n1: ";
	cin>>n1;
	
    cout<<"Insira a n2: ";
	cin>>n2;
	
    cout<<"Insira a n3: ";
	cin>>n3;
	
    cout<<"Insira a p1: ";
	cin>>p1;
	
    cout<<"Insira a p2: ";
	cin>>p2;
	
    cout<<"Insira a p3: ";
	cin>>p3;
	
    media = (n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3);
    
    cout<<"A media eh: ";
    cout<< fixed << setprecision(3) << media;

	
}