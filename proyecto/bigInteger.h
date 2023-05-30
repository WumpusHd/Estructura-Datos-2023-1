/*
 *
 * Autor: Santiago Arango Henao
 *Fecha Creacion: 30 de Abril 2023
 *Version 1
 *
 *Archivo implementacion Prototipos Big Integer
 */



#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <iostream>
#include <string>
#include <vector>


class BigInteger {
private:
    std::vector<int> enterosGrandes;

public:
    /*Operaciones del TAD BIG INTEGER */



    /*      Constructoras       */
    
    BigInteger();
    BigInteger(const std::string& number);
    BigInteger(const BigInteger& entero);


    /*      Modificadoras       */

    void add(BigInteger& entero);

    void product(BigInteger& entero);

    void substract(BigInteger& entero);

    void quotient(BigInteger& divisor);

    void remainder(BigInteger& entero);

    void pow(int exponente);


    /*      Analizadora      */

    std::string toString();


    /*  Sobrecarga de Operadores */

    BigInteger operator+(BigInteger& entero);

    BigInteger operator-(BigInteger& entero);

    BigInteger operator*(BigInteger& entero);

    BigInteger operator/(BigInteger& entero);

    BigInteger operator%(BigInteger& entero);



    /*  Operadores Booleanos */ 

    bool operator==(BigInteger& entero);

    bool operator<(BigInteger& entero);

    bool operator<=(BigInteger& entero);

    bool operator >=(BigInteger& entero);

    BigInteger operator -=(BigInteger& entero);

};

#endif
