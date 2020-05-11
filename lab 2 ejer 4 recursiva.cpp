#include<iostream>
using namespace std;
//4. Implementeunafunciónquerecibaunacadenayretornesutamaño.(Iterativayrecursiva)


// metodo recursiva  LAB2 EJER 4
int tamanio(char n[],int i){
	if(n[i]=='\0')
	return i;
	else{
		i++;
		tamanio(n,i);
	}
}
	
int main(){
	char n[]="hola mundo";
	int i=0;
	cout<<tamanio(n,i);
	return 0;
}
