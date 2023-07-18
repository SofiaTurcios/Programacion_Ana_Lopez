#include <iostream>
#include <string>

using namespace std;

bool palindromo(string&frase){
	int inicio=0;
	int final=frase.length()-1;
	
	while(inicio<final){
		if(frase[inicio]!=frase[final]){
			return false;
		}
		inicio++;
		final--;
	}
    return true;
    }

int main(){
	string frase;
	cout<<"ingrese una frase "<<endl;
	cin>>frase;
   
   
   if(palindromo(frase)){
   	 cout<<"verdadero, la frase es un palindromo"<<endl;
     } 
     else {
   	 cout<<"falso, la frase no es un palindromo"<<endl;
   }

   return 0;
}
