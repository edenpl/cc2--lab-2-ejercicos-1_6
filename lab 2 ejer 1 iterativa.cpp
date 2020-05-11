#include<iostream>
using namespace std;
//1. Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.(Iterativa y recursiva).


// metodo iteratuvo  LAB2 EJER 1


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
void sumar(int m[],int n){//suma los elementos del array
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+m[i];
	}
	cout<<endl<<sum;
}
int main(){
	int n1;
	cin>>n1;
	int m1[n1];
	ingresar(m1,n1);
	mostrar(m1,n1);
	sumar(m1,n1);
	return 0;
}
