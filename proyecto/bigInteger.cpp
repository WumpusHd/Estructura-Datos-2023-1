/*
 *
 * Autor: Santiago Arango Henao
 *Fecha Creacion: 30 de Abril 2023
 *Version 1
 *
 *Archivo imeplementación funciones Big Integer
 */


#include "bigInteger.h"



BigInteger::BigInteger(){

}


BigInteger::BigInteger(const std::string& entero) {
    for (int i = entero.length()-1; i >= 0; i--) {
        int enteroTmp = entero[i] - '0';    
        enterosGrandes.push_back(enteroTmp);
    }
}

BigInteger::BigInteger(const BigInteger& entero) {
    enterosGrandes = entero.enterosGrandes;
}

void BigInteger::add(BigInteger& entero) {
    int lleva = 0;
    int maxEnterosGrandes = std::max(enterosGrandes.size(), entero.enterosGrandes.size());

    for (int i = 0; i < maxEnterosGrandes || lleva > 0; i++) {
        int sum = lleva;

        if (i < enterosGrandes.size())
            sum += enterosGrandes[i];
        
        if (i < entero.enterosGrandes.size())
            sum += entero.enterosGrandes[i];

        lleva = sum / 10;
        sum %= 10;

        if (i < enterosGrandes.size())
            enterosGrandes[i] = sum;
        else
            enterosGrandes.push_back(sum);
    }
}

void BigInteger::product(BigInteger& entero) {
    BigInteger resultado;  
    int maxDigitos = enterosGrandes.size() + entero.enterosGrandes.size();  

    for (int i = 0; i < maxDigitos; i++) {
        resultado.enterosGrandes.push_back(0);
    }

    for (int i = 0; i < enterosGrandes.size(); i++) {
        int lleva = 0;

        for (int j = 0; j < entero.enterosGrandes.size() || lleva > 0; j++) {
            int prod = lleva;

            if (j < entero.enterosGrandes.size())
                prod += enterosGrandes[i] * entero.enterosGrandes[j];

            lleva = prod / 10;
            prod %= 10;

            resultado.enterosGrandes[i + j] += prod;
            if (resultado.enterosGrandes[i + j] >= 10) {
                resultado.enterosGrandes[i + j] -= 10;
                lleva++;
            }
        }
    }

    enterosGrandes = resultado.enterosGrandes;

}


void BigInteger::substract(BigInteger& entero) {
    int prestado = 0;
    int maxEnterosGrandes = std::max(enterosGrandes.size(), entero.enterosGrandes.size());

    for (int i = 0; i < maxEnterosGrandes || prestado > 0; i++) {
        int diferencia = prestado;

        if (i < enterosGrandes.size())
            diferencia += enterosGrandes[i];
        
        if (i < entero.enterosGrandes.size())
            diferencia -= entero.enterosGrandes[i];

        if (diferencia < 0) {
            diferencia += 10;
            prestado = -1;
        } else {
            prestado = 0;
        }

        if (i < enterosGrandes.size())
            enterosGrandes[i] = diferencia;
        else
            enterosGrandes.push_back(diferencia);
    }

    //Eliminar ceros restantes del frente del vector
     while (enterosGrandes.size() > 1 && enterosGrandes.back() == 0) {
        enterosGrandes.pop_back();
    }
}


void BigInteger::quotient(BigInteger& divisor){
    BigInteger cociente;
    BigInteger incremento("1");
    BigInteger residuo(*this);

    // Realizar la división
    while (residuo >= divisor) {
        residuo -= divisor;
        cociente + incremento;
    }

    *this = cociente;
}






void BigInteger::pow(int exponent) {
    
    BigInteger base(*this);      
    BigInteger resultado("1");       

    while (exponent > 0) {
        if (exponent % 2 == 1) { // Si el exponente es impar
            resultado.product(base);
        }

        base.product(base);   
        exponent /= 2;         
    }

    *this = resultado;            
}



std::string BigInteger::toString(){
    std::string resultado;

    for (int i = enterosGrandes.size() - 1; i >= 0; i--) {
        resultado += std::to_string(enterosGrandes[i]);
    }

    return resultado;
}


BigInteger BigInteger::operator+(BigInteger& entero){
    BigInteger suma(*this);

    suma.add(entero);

    return suma;

}

BigInteger BigInteger::operator-(BigInteger& entero){
    BigInteger resta(*this);

    resta.substract(entero);

    return resta;

}


BigInteger BigInteger::operator*(BigInteger& entero){
    BigInteger multiplicacion(*this);

    multiplicacion.product(entero);

    return multiplicacion;

}


BigInteger BigInteger::operator/(BigInteger& entero){
    BigInteger division(*this);

    division.quotient(entero);

    return division;

}

/*
BigInteger BigInteger::operator%(BigInteger& divisor)  {
   

    BigInteger cociente = *this / divisor;  
    BigInteger residuo = *this - (cociente * divisor);  

    return residuo;
}

*/

 bool BigInteger::operator==(BigInteger& entero){
    return enterosGrandes == entero.enterosGrandes;
 }


 bool BigInteger::operator<(BigInteger& entero){
    return enterosGrandes < entero.enterosGrandes;
 }

bool BigInteger::operator<=(BigInteger& entero){
    return enterosGrandes <= entero.enterosGrandes;

 }

bool BigInteger::operator >=(BigInteger& entero){
    return enterosGrandes >= entero.enterosGrandes;
 }


BigInteger BigInteger::operator-=(BigInteger& entero) {
    *this = *this - entero;
    return *this;
}





