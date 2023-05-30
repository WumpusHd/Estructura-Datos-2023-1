#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <iostream>
#include <string>
#include <vector>


class BigInteger {
private:
    std::vector<int> enterosGrandes;

public:
    BigInteger();
    BigInteger(const std::string& number);
    BigInteger(const BigInteger& entero);


    void add(BigInteger& entero);

    void product(BigInteger& entero);

    void substract(BigInteger& entero);

    void quotient(BigInteger& divisor);

    void remainder(BigInteger& entero);

    void pow(int exponente);


    std::string toString();


    BigInteger operator+(BigInteger& entero);

    BigInteger operator-(BigInteger& entero);

    BigInteger operator*(BigInteger& entero);

    BigInteger operator/(BigInteger& entero);

    BigInteger operator%(BigInteger& entero);

    bool operator==(BigInteger& entero);

    bool operator<(BigInteger& entero);

    bool operator<=(BigInteger& entero);

    bool operator >=(BigInteger& entero);

    BigInteger operator -=(BigInteger& entero);

};

#endif
