#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
	char frase[50];
	
	cout<<"ingrese una frase "<<endl;
	
	cin.getline(frase,50,'\n'); 
	cout<<"la frase inversa es "<<endl;
	
	int distancia = strlen(frase);
	for(int i=distancia-1; i>=0; i--){
	cout<<frase[i];
 }	
	
	return 0;
}