#include<iostream>
using namespace std;

//5. Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b. //

//ejer 5


void combinar(char cad1[],char cad2[]){
    char cad3[40];//implementar un tercera cadena 
    int i = 0;//incremento ala tercera cadena 
    for( int e = 0; cad1[e] != 0 ;e++){
        cad3[i] = cad1[e];//copiar la primera ala tercera 
        i++;
    }
    for(int k = 0; cad2[k] != 0;k++){//copiar de la segunda ala tercera
        cad3[i] = cad2[k];
        i++;
    }
    cout<<cad2;
    cout<<endl;
}
int main(){
	char cadenaA[20]="";//primera cadena 
    char cadenaB[20]="";//segunda cadena
    cin.getline(cadenaA,20);
    cin.getline(cadenaB,20);
    combinar(cadenaA,cadenaB);
	return 0;
}
