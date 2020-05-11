#include<iostream>
using namespace std;


//4. Implementeunafunciónquerecibaunacadenayretornesutamaño.(Iterativayrecursiva)/

// metodo iterativa  LAB2 EJER 4
void tamanio(char n[],int tam){	
	for(int i=0;n[i]!='\0';i++){
		tam++;
	}
	cout<<tam;
}
int main(){
	char n[]="hola mundo";
	int tam;
	tamanio(n,tam);
	return 0;
}
