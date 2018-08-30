/* 
* Programa: generar un arreglo con los 100 primeros numeros pares y muestre su suma
* Fecha: 29 de agosto  del 2018
* Elaborado por: Leidy Yuliana Quintero
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,cont,sum,i,tabla[100];
	
	i=0;
	sum=0;
	for (x=1;x<=100;x++)
	{
		cont=0;
		if (x%2==0)
		{
			tabla[i]=x;
			i++;
		}
	}
	
	for (x=0;x<i;x++)
	{
		sum=sum+tabla[x];
	}
	
	printf("%d\n",sum);
	
	system("PAUSE");     
	return 0;
}
