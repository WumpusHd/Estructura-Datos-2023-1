#include "lista.h"
#include <iostream>


/*

Estudiante: Santiago Arango Henao

Codigo: 8971445

Tarea #5
*/


/*
Complejidad Algoritmica ContarOcurrencias:

La complejidad del algoritmo Contar Ocurrencias es de O(((3n)/2)) por la razón que si tenemos una lista de N elementos,
entonces tomará N iteraciones para determinar cuantas veces se repite el elemento v, ya que la complejidad para calcular
el largo de una lista circular doble es O(n), además tener en cuenta que se usa la operacion infoLista que tiene un costo
de O(n/2), la cual se emplea para conocer el valor de cada posicion en la lista. Teniendo todo esto en cuenta para el peor caso,
se concluye que la complejidad de la operacion ContarOcurrencias es O(((3n)/2)).
*/

int contarOcurrencias(Lista &l, int elemento)
{
	int elementoRepetido = 0;
	int compararElemento;
	int i = 0;
	while(i <= l.longLista())
	{
		compararElemento = l.infoLista(i);
		if(elemento == compararElemento)
			elementoRepetido++;
		i++;
	}
	
	return elementoRepetido;
}

/*Complejidad Algoritmica ObtenerMenor:

Para calcular la complejidad del siguiente algoritmo, se tiene en cuenta el costo de cada una 
de las operaciones usadas de listas circulares dobles, longLista O(n) , infoLista O(n/2) y anxLista O(1).
En el peor caso, se tendría una lista de n elementos, dentro de los cuales se retornara una lista con aquellos
numeros menores al elemento pasado como parametro. Sería recorrer una lista de n elementos, donde n elementos sean menores
al elemento dado y finalmente agregarlos a una lista, sería una complejidad de O(n) + O(n/2) +O(1) = O(((3n)/2)+1), casi identica
a la complejidad del anterior algoritmo 

Lista obtenerMenores(Lista &l, int elemento)
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
