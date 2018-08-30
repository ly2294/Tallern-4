/*
Programa: generar un arreglo que imprima los 100 primeros numeros enteros en orden descendentes
fecha:29 de agosto del 2018
creador: Leidy Yuliana Quintero Jaramillo
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int x,tabla[100];
	
	for (x=1;x<=100;x++)
	{
		tabla[x]=x;
	}
	
	for (x=100;x>=1;x--)
	{
		printf("%d\n",tabla[x]);
	}
	return 0;
}

