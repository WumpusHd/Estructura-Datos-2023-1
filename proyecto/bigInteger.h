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
#include <vector>
#include <string>

using namespace std;


class BigInteger{

	private:
		string BigInteger;
		vector<BigInteger> bigIntegers;
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


		BigInteger sumarListaValores(vector<BigInteger> &bigIntegers);
		BigInteger MultiplicarListaValores(vector<BigInteger> &bigIntegers);

		/*      Analizadoras      */
		string toString();

};

#endif

