//Leia um n�mero inteiro (3 d�gitos) e escreva o inverso do n�mero. (Ex.: num = 532 ; inverso =235)

#include <iostream>
#include <math.h>

using namespace std;

main(){
	int num, num_invertido, centena, dezena, unidade;
	
	cout<<"Insira o numero: ";
	cin>>num;
	
    centena = num/100;

    dezena = (num - (centena * 100))/10;

    unidade = num - (centena * 100 + dezena * 10);

    num_invertido = unidade * 100 + dezena * 10 + centena * 1;
    
    cout<<num_invertido;

	
}