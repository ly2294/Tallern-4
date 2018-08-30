/* 
* Programa: Generar un arreglo numerico entero en el cual contenga 10 elementos ingresados por el usuario y mostrar en pantalla cual de ellos son numeros pares
* Fecha: 29 de agosto  del 2018
* Elaborado por: Leidy Yuliana Quintero
*/
#include <stdio.h>
using namespace std;

int main() 
{
	int  num[10];
	printf ("Ingrese 10 numeros: \n");
	for(int i=0; i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Los numeros pares son:\n");
	for(int i=0; i<10;i++)
	{
		if (num[i] % 2 == 0)
		{
			printf ("%d,",num[i]);
		}
		
	}
	
	
	return 0;
}

