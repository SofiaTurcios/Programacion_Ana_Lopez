#include <iostream>
#include <string>

using namespace std;

string nombres[10];
string apellidos[10];
int cursos;
int notas;
int i;

int main() {
	while (i != 5){
 cout<<"Elija una opcion"<<endl;
 cout<<"ingresar nombres y apellidos"<<endl;
 cout<<"ingresar las notas de los cursos"<<endl;
 cout<<"visualizar las notas"<<endl;
 cout<<"promedio"<<endl;
 cout<<"salir"<<endl;
 cin>>i;

	
	switch(i){
		case 1: cout<<"ingrese el nombre y apellido"<<endl;
		for(int i=0; i<10; i++){
			cin>>nombres[i];
			cin>>apellidos[i];
	}
	break;
	
	case 2: cout<<"ingrese las notas de los cursos"<<endl;
    	cout<<"ingrese la cantidad de cursos"<<endl;
    	cin>>cursos;
		for(int i=0; i<10; i++){
			cout<< "curso"<<i+1<<endl;
			cin>>notas;
	}
	break;
	
	case 3: cout<<"las notas son"<<endl;
		for(int i=0; i<10; i++){
	    	cout<<"curso "<<i+1<<notas<<endl;
	}
	break;
	
    case 4: cout<<"el promedio general es: "<<endl;
		for(int i=0; i<10; i++){
			cin>>notas;
	}
	break;
	
	return 0;
}
}
}