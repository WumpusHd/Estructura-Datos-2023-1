#include "lista.h"
#include <iostream>


/*

Estudiante: Santiago Arango Henao

Codigo: 8971445

Tarea #5
*/


/*
Complejidad Algoritmica ContarOcurrencias:

La complejidad del algoritmo Contar Ocurrencias es de O(n) por la razón que si tenemos una lista de N elementos,
entonces tomará N iteraciones para determinar cuantas veces se repite el elemento v, ya que la complejidad para calcular
el largo de una lista circular doble es O(n), además tener en cuenta que se usa la operacion infoLista que tiene un costo
de O(n/2), la cual se emplea para conocer el valor de cada posicion en la lista, pero aunque se tenga en cuenta la informacion
en esa posicion de la lista, sigue siendo lineal ya que solo se comparan valores entre si. Teniendo todo esto en cuenta para el peor caso,
se concluye que la complejidad de la operacion ContarOcurrencias es O(n).
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
numeros menores al elemento pasado como parametro, en caso que no haya elementos menores, sería constante ya que solo se
recorre una posición. Considere que tenemos un número demasiado grande, la cantidad de elementos menores a este sería n elementos
ya que solo consta de constantes, sin embargo, todos estos n elementos se agregan a una lista, lo cual aumenta la complejidad
de ser lineal a ser cuadratica ya que por cada elemento menor al dado, se tiene que agregar a otra lista, es el doble de trabajo.
Por lo tanto, la complejidad del algoritmo obtenerMenores es O(n^2).

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
