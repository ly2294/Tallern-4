/* 
* Programa: inicializar un arreglo de 10 elementos, y con un ciclo for verificar cual de los elementos es el mayor
* Fecha: 29 de agosto del 2018
* Elaborado por: Leidy Yuliana Quintero
*/
#include <stdio.h>


int main() 
{
	int num[]={100,2,3,7,800,9,6,50,4,200};
	int mayor=num[0];
	for(int i=0; i<10; i++)
	{
		
		if(mayor<num[i])
		{
			mayor=num[i];
			
		}
		
		
	}
	printf("El numero mayor es: %d",mayor);
	
	
	return 0;
}



