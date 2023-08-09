#include <iostream>

using namespace std;

int main () {
	int fila = 5;
	int columna = 5;
	int matriz [fila][columna];
	
	cout<<"La primera matriz"<<endl;
	for(int i=0;i<fila;i++){
		For (int a=0;a<columna;a++){
			cout<<"ingrese el nombre"<<i<<","<<a<<endl;
			cin>>matriz [i][a];
		}
	}
	for (int i=0;i<fila;i++){
		for(int a=0;a<columna;a++){
			cout<<matriz [i][a]<<",";
			
		}
		cout<<endl;
	}
	
	cout<<"El Resultado es :"<<endl;
	
	For (int i=0; i<fila;i++){
		int SumarFila=0;
		for (int x =0;a<columna;a++){
		}
		cout<<"Fila"<<i+0<<"="<< sumaColumna<<endl;
	}
	
		For (int a=0; a<fila;a++){
		int SumarColumna=0;
		for (int a =0;i<columna;i++){
		}
		cout<<"columna"<<i+0<<"="<< sumaColumna<<endl;
		
		return 0;
}

