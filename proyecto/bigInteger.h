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

	public:

		/*Operaciones del TAD BIG INTEGER */


		/*      Constructoras       */
		BigInteger(string);

		BigInteger(BigInteger);

		/*      Modificadoras       */

		void add(BigInteger &entero);
		void product(BigInteger &entero);
		void substract(BigInteger &entero);
		void quotient(BigInteger &entero);
		void remainder(BigInteger &entero);
		void pow(BigInteger &entero);
		BigInteger operator +(BigInteger &entero);
		BigInteger operator -(BigInteger &entero);
		BigInteger operator *(BigInteger &entero);
		BigInteger operator /(BigInteger &entero);
		BigInteger operator %(BigInteger &entero);
		BigInteger operator ==(BigInteger &entero);
		BigInteger operator <(BigInteger &entero);
		BigInteger operator <=(BigInteger &entero);


		BigInteger sumarListaValores(Lista &bigIntegers);
		BigInteger MultiplicarListaValores(Lista &bigIntegers);

		/*      Analizadoras      */
		string toString();

};

#endif

