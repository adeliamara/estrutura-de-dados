#include <iostream>
#include <math.h>

using namespace std;


int main(){
    int anos, meses, dias;

    cout<<"Insira a idade em dias: ";
    cin>>dias;

    anos = dias/365;
    dias = dias%365;
    meses = dias/30;
    dias = dias%30;

    cout<<anos<<" anos, "<< meses<<" meses e "<<dias<<" dias";
    
    return 0;
}