/*
 *
 * Autor: Santiago Arango Henao
 *Fecha Creacion: 30 de Abril 2023
 *Fecha Ultima Modificacion: 
 *Version 1
 *
 *Archivo implementacion Prototipos Big Integer
 */



#include "bigInteger.h"

metodosBigInteger::constructorBigInteger(string entero){
	Lista l;
	for(int i = 0; i < entero.length()+1; ++i)
	{
		if(entero[i] == '0')
			l.anxLista(0);

		if(entero[i] == '1')
			l.anxLista(1);

		if(entero[i] == '2')
			l.anxLista(2);

		if(entero[i] == '3')
			l.anxLista(3);

		if(entero[i] == '4')
			l.anxLista(4);

		if(entero[i] == '5')
			l.anxLista(5);

		if(entero[i] == '6')
			l.anxLista(6);

		if(entero[i] == '7')
			l.anxLista(7);

		if(entero[i] == '8')
			l.anxLista(8);

		if(entero[i] == '9')
			l.anxLista(9);
	}
}




metodosBigInteger::constructorBigIntegerCopia()
{
	bigInteger copiaEntero = constructorBigInteger(string entero);
}

