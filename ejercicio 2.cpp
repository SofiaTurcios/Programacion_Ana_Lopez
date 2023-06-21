#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
	char frase[35];
	int vocal=0;
	int a=0;
	int e=0;
	int i=0;
	int o=0;
	int u=0;
	
	cout<<"ingrese una frase "<<endl;
	cin.getline(frase,35,'\n');
	int distancia = strlen(frase);
	
    for (int x=0; x<distancia; x++) {
    	
        char letra = tolower(frase[x]);

        if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u') {
            vocal++;
        }
    }
	
	cout<<"la cantidad de vocales es: "<<vocal<<endl;
	
	for(int x=0; x<distancia; x++){
	char vocal=tolower(frase[x]);
	
    switch(vocal){
    	case 'a':
    	a++;
    	break;
    	
    	case 'e':
    	e++;
		break;
    	
    	case 'i':
    	i++;
		break;
    	 
    	case 'o':
    	o++;
		break;
    	
    	case 'u':
    	u++;
		break;
	}
}

cout<<"la cantidad de vocales a es: "<<a<<endl;
cout<<"la cantidad de vocales e es: "<<e<<endl; 
cout<<"la cantidad de vocales i es: "<<i<<endl;
cout<<"la cantidad de vocales o es: "<<o<<endl; 
cout<<"la cantidad de vocales u es: "<<u<<endl; 
	
	return 0;
}