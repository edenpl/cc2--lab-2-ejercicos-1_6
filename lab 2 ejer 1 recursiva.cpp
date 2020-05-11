#include<iostream>
using namespace std;
//1. Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.(Iterativa y recursiva).
// metodo recursiva  LAB2 EJER 1

void ingresar(int m[],int n,int cont){//ingresa los numeros al array
	cont++;
	if(cont==n-1)
		cin>>m[n-1];
	else{
		cin>>m[cont];
		ingresar(m,n,cont);
	}
}
void mostrar(int m[],int n){//muestro el array
	for(int i=0;i<n;i++){
		cout<<m[i];
	}
}
int suma(int m[],int n,int sum,int x){
	if(x==n-1){
	sum=sum+m[x];//ultimo valor a sumar
	return sum;
	}
	else{
		sum=sum+m[x];//aumento de suma
	}
	x++;
	suma(m,n,sum,x);//llaam denuevo ala suncion 
	
}


int main(){
	int n;
	int cont=-1;//variable para aumento de ingreso
	int x=0;//vas¿riable para aumento de suma
	int sum;//suma
	cin>>n;
	int m[n];
	ingresar(m,n,cont);
	mostrar(m,n);
	cout<<endl;
	cout<<suma(m,n,x,sum);
	
	
	return 0;
}
