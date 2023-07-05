#include <iostream>
#include <string.h>

using namespace std;

string nombres;
int cursos=0;
int notas[100];
float promedio=0.0;
int i;

int main() {
	while (i != 5){
 cout<<"Elija una opcion"<<endl;
 cout<<"1. ingresar nombres y apellidos"<<endl;
 cout<<"2. ingresar las notas de los cursos"<<endl;
 cout<<"3. visualizar las notas"<<endl;
 cout<<"4. promedio"<<endl;
 cout<<"5. salir"<<endl;
 
 cin>>i;
	
	switch(i){
		case 1: cout<<"ingrese el nombre y apellido"<<endl;
	    cin.ignore();
	    getline(cin, nombres);
	    
		cout<<" "<<endl;
	break;
	
	
	case 2: cout<<"ingrese la cantidad de cursos"<<endl;
    	cin>>cursos;
		for(int i=0; i<cursos; i++){
			cout<< "curso"<<i+1<<endl;
			cin>>notas[i];
	    }	
	    cout<<" "<<endl;
	break;
	
	
	case 3: cout<<"las notas son"<<endl;
		for(int i=0; i<cursos; i++){
	    	cout<<"curso "<<i+1<<": "<<notas[i]<<endl;
	   }
	   cout<<" "<<endl;
	break;
	
	
    case 4: cout<<"el promedio general es: "<<endl;
		for(int i=0; i<cursos; i++){
			promedio+=notas[i];
	}
	promedio/=cursos;
	cout<<fixed<<promedio<<endl;
	break;
	
	return 0;
}
}
}
