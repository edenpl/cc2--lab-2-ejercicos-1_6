#include<iostream>
using namespace std;

//2. Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).


// metodo iteratuvo  LAB2 EJER 2

void ingresar(int m[],int n){//ingreso los numeros al array
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
}
void mostrar(int m[],int n){//muestro el array
	
	for(int i=0;i<n;i++){
		cout<<m[i];
	}
}
void invertir(int m[],int n){
	int aux;
	for(int i=0;i<n/2;i++){
		aux = m[i];//guardo los numeros a cambiar 
		m[i]=m[n-1-i];//cambio los numeros de la ultima pocicion ala primera
		m[n-1-i]=aux;//actualizo la ultima pocicion con la primera 
	}
}
int main(){
	int n1;
	cin>>n1;
	int m1[n1];
	ingresar(m1,n1);
	invertir(m1,n1);
	mostrar(m1,n1);
	return 0;
}
