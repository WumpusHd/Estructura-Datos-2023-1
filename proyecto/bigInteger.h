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


class BigInteger{

	private:
		string BigInteger;
};


class metodosBigInteger{
	public:

		/*Operaciones del TAD BIG INTEGER */


		/*      Constructoras       */
		constructorBigInteger(string entero);

		constructorBigIntegerCopia(BigInteger);

		/*      Modificadoras       */

		void add(BigInteger &entero);
		void product(BigInteger &entero);
		void substract(BigInteger &entero);
		void quotient(BigInteger &entero);
		void remainder(BigInteger &entero);
		void pow(BigInteger &entero);
		metodosBigInteger operator +(BigInteger &entero);
		metodosBigInteger operator -(BigInteger &entero);
		metodosBigInteger operator *(BigInteger &entero);
		metodosBigInteger operator /(BigInteger &entero);
		metodosBigInteger operator %(BigInteger &entero);
		metodosBigInteger operator ==(BigInteger &entero);
		metodosBigInteger operator <(BigInteger &entero);
		metodosBigInteger operator <=(BigInteger &entero);


		BigInteger sumarListaValores(BigInteger &entero);
		BigInteger MultiplicarListaValores(BigInteger &entero);

		/*      Analizadoras      */
		string toString();

};

#endif

