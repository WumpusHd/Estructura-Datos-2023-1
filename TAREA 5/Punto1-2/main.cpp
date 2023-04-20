#include "lista.h"
#include <iostream>


/*
Complejidad Algoritmica ContarOcurrencias:

La complejidad del algoritmo Contar Ocurrencias es de O(n^2) por la razón que si tenemos una lista de N elementos,
entonces tomará N iteraciones para determinar cuantas veces se repite el elemento v, pero si dicho elemento v no existiera
en la lista, tomaría N iteraciones para encontrarlo, por lo cual se tomaría que la complejidad seria O(n^2)*/

int contarOcurrencias(Lista &l, int elemento)
{
	int elementoRepetido = 0;
	int compararElemento;
	if(l.vaciaLista())
		elementoRepetido = 0; 
	else
	{
		int i = 0;
		while(i <= l.longLista())
		{
			compararElemento = l.infoLista(i);
			if(elemento == compararElemento)
				elementoRepetido++;
			i++;
		}
	}
	return elementoRepetido;
}


Lista obtenerMenores(Lista &l, int elemento)
{
	int compararElemento;
	Lista l2;
	if(l.vaciaLista())
		printf("Lista vacia"); 
	else
	{
		int i = 1;
		while(i <= l.longLista())
		{
			compararElemento = l.infoLista(i);
			if(compararElemento < elemento)
			{
				l2.anxLista(compararElemento);
			}
			i++;
			
		
		}
	}
	return l2;
		
}




int main()
{
	/* Implementacion Punto 1*/

	Lista l1;
	l1.anxLista(4);
	l1.anxLista(12);
	l1.anxLista(1);
	l1.anxLista(7);
	l1.anxLista(5);
	l1.anxLista(3);
	l1.anxLista(5);
	l1.anxLista(9);
	int  elementoRepetido = contarOcurrencias(l1,5);
	printf("%d", elementoRepetido);
	printf("\n");


	/*Implementacion punto 2 */
	Lista l2 = obtenerMenores(l1,5);


	for(int x = 1; x <= l2.longLista(); x++)
			printf("[%d]", l2.infoLista(x));
	return 0;

}
