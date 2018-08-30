/* 
* Programa: inicalizar un arreglo numerico decimal de 4 elementos, mostrarlos en pantalla y realizar la suma de los elementos
* Fecha: 29 de agosto del 2018 
* Elaborado por: Leidy Yuliana Quintero
*/
#include <stdio.h>
using namespace std;

int main() 
{
	float  suma,num[]={1.1,1.2,1.3,1.4};
	printf ("Numeros decimales: ");
	for(int i=0; i<4;i++)
	{
		printf ("\n %.1f",num[i]);
		suma+=num[i];
	}
	printf ("\nLa suma de los numeros decimales es: %.1f ",suma);
	
	return 0;
}
