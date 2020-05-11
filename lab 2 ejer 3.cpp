#include<iostream>

//3. Implementarunafunciónqueordeneloselementosdeunarreglo:ascendente.

//ejer 3 



using namespace std;
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


void ordenamiento(int m[],int n){	//compara 
	int caja;						//guarda el numero a intercambiar
	for(int i=0;i<n;i++){ 			//hace el numero de interacciones a recorrer = n
		for(int j=i+1;j<n;j++){		 //recorre n-1 para comparar 
			if(m[i]>m[j]){ 			// compara si el numero posterior es nemor al acctual, si es asi lo cambia
				caja=m[i];			// guardar el numero 
				m[i]=m[j];			// cambio de numero al posterior de ella
				m[j]=caja;			// pone el numero mayor en el posterior numero del array
			}
				
		}

	}
	
}


int main(){
	int n1;						//cantidad de numeros
	cin>>n1;
	int m1[n1];					//primer array
	ingresar(m1,n1); 			// ingresa los numeros a ordenar
	cout<<endl;
	ordenamiento(m1,n1);
	mostrar(m1,n1);				//muestra el array ordenado 
	return 0;
}
