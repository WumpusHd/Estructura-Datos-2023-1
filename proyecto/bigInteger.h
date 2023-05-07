/*
 *
 * Autor: Santiago Arango Henao
 *Fecha Creacion: 30 de Abril 2023
 *Fecha Ultima Modificacion: 
 *Version 1
 *
 *Archivo implementacion Prototipos Big Integer
 */


#ifndef __BIGINTEGER_H
#define __BIGINTEGER_H

#include "lista.h"
#include <iostream>
#include <string>

using namespace std;


class bigInteger{

	private:
		string bigInteger;
};


class metodosBigInteger{
	public:

		/*Operaciones del TAD BIG INTEGER */


		/*      Constructoras       */
		constructorBigInteger(string entero);

		constructorBigIntegerCopia();

		/*      Modificadoras       */

		void add(bigInteger);
		void product(bigInteger);
		void substract(bigInteger);
		void quotient(bigInteger);
		void remainder(bigInteger);
		void pow(bigInteger);
		metodosBigInteger operator +(bigInteger);
		metodosBigInteger operator -(bigInteger);
		metodosBigInteger operator *(bigInteger);
		metodosBigInteger operator /(bigInteger);
		metodosBigInteger operator %(bigInteger);
		metodosBigInteger operator ==(bigInteger);
		metodosBigInteger operator <(bigInteger);
		metodosBigInteger operator <=(bigInteger);


		Lista sumarListaValores(bigInteger);
		Lista MultiplicarListaValores(bigInteger);

		/*      Analizadoras      */
		string toString();

};

#endif

