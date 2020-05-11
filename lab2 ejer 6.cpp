#include<iostream>
using namespace std;

//6. Implementeunafunciónquerecibadoscadenasayb;ycopieloselementosdelacadenaaparalacadenab. 


void intercambio(char cad1[],char cad2[]){
    for( int i = 0; cad1[i] != 0 ;i++){// !0 por que al terninar una cadena de caracteres la seguiente es 0 por vacio
        cad2[i] = cad1[i];//copia la cadena 1 a la cadena 2
    }
    cout<<cad2;
   
}
int main(){
	char cadenaA[20]="";//primera cadena
    char cadenaB[20]="";//segunda cadena
    cin.getline(cadenaA,20);//implemeto de la funcion cin.getline en ves de cin 
    cin.getline(cadenaB,20);
    intercambio(cadenaA,cadenaB);
	return 0;
}
