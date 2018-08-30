
/*
Programa: que lea 5 números por teclado, los copie a otro array multiplicados por 2 y muestre el segundo array
fecha:29 de agosto del 2018
creador: Leidy Yuliana Quintero Jaramillo
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int aux, numeros1[5],numeros2[5];
	int i,j;
	
	for (i=0;i<5;i++){
		printf("Escriba un número");
		scanf("%d",&numeros1[i]);
	}
	
	for(i=0;i<5;i++)
	{
		numeros2[i]=numeros1[i]*2;
	}
	
	for (i=0;i<5;i++){
		printf("%d\n",numeros2[i]);
	}
	
	
	return 0;
}

