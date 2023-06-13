#include <iostream>
using namespace std;

int main() {
	
	int fila=4;
	int columna=4;
	
	int matriz[fila][columna];
	
	for(int i=0;i<fila;i++){
		for(int x=0;x<columna;x++){
			cout<<"ingrese el dato en "<<i<<","<<x<<endl;
			cin>>matriz[i][x];
		}
	}
	
	cout<<"resultados: ";
	
	for(int i=0;i<fila;i++){
		int suma=0;
		for(int a=0;a<columna;a++){
		suma +=matriz[i][a];
    	}
    	cout<<"la suma de las filas es: "<<i+1<<suma<<endl;
	}


	return 0;
}
