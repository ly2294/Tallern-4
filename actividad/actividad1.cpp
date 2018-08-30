/*
Programa: realizar programa que pida 5 calificaciones por teclado,lo muestre y calcule el promedio de ellos
fecha:29 de agosto del 2018
creador: Leidy Yuliana Quintero Jaramillo
*/
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float notas[5],pro;
	printf("Ingrese las cinco notas\n ");
	for(int i=0;i<5;i++)
	{
		scanf("%f", &notas[i]);
		
	}
	printf("Las notas ingresadas son:\n");
	for(int i=0;i<5;i++)
	{
		printf("%.0f  ",notas[i]);
		pro+=notas[i];
	}
	
	printf("\nEl promedio de sus notas es: %.1f ",pro/5);
	return 0;
}
