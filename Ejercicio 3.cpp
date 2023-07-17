#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int fila=5;
	int columna=5;
	
	int matriz[fila][columna];

    cout<<"ingrese los datos de la matriz "<<endl;
    
	for(int i=0;i<fila;i++){
		for(int x=0;x<columna;x++){
		cin>>matriz[i][x];
    	}
	}
	
	int suma_total=0;
	int fila_max=-1;
	
	for(int i=0;i<fila;i++){
		int suma_fila=0;
		for(int x=0;x<columna;x++){
			suma_fila+=matriz[i][x];
		}
	
		if(suma_fila>suma_total){
			fila_max=i;
		}
	}
	
	cout<<"la fila con la suma maxima es la fila "<<fila_max+1<<endl;
	cout<<"el valor de la suma de la fila es "<<fila_max<<endl;

	return 0;
}