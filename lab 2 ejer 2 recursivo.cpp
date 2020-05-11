#include<iostream>
using namespace std;

//  2. Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).


// METODO RECURSIVO LAB2 EJER 2 

void ingresar(int m[],int n){
	n=n-1;//disminuye la ubicacion del array 
	if(n==0)
	cin>>m[0];
	else{
		cin>>m[n];
		ingresar(m,n);//llama ala funcion ingresar hasta que sea 0
	}
}
void mostrar(int m[],int n,int cont){//funcion recursibo para mostrar elementos de una array
	cont++;//aumenta el numero para mostrar la pocicion 
	if(cont==n-1)
	cout<<m[n-1];
	else{
		cout<<m[cont];
		mostrar(m,n,cont);
		
		
	}
}

int main(){
	
	int n1;
	int cont=-1;//-1 por que enpieza en 0 y no se puede inicializar con n
	cin>>n1;
	int m1[n1];
	ingresar(m1,n1);
	mostrar(m1,n1,cont);
	return 0;
}
