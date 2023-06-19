#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	
	char nombre[5][20];
	cout<<"ingrese los nombres: "<<endl;
	
 for(int i=0; i<=4; i++){
	
	cin.getline(nombre[i],20,'\n'); 
 }
 
 cout<<" "<<endl;
 
 for(int x=0; x<=4; x++){
	int distancia = strlen(nombre[x]);
	cout<<nombre[x]<<":"<<distancia<<endl;
 }

	return 0;
}