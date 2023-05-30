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
    BigInteger result;  // Objeto BigInteger para almacenar el resultado
    int maxDigitos = enterosGrandes.size() + entero.enterosGrandes.size();  // Número máximo de dígitos en el resultado

    // Inicializar result con ceros para almacenar los dígitos multiplicados
    for (int i = 0; i < maxDigitos; i++) {
        result.enterosGrandes.push_back(0);
    }

    // Realizar la multiplicación dígito por dígito
    for (int i = 0; i < enterosGrandes.size(); i++) {
        int lleva = 0;

        for (int j = 0; j < entero.enterosGrandes.size() || lleva > 0; j++) {
            int prod = lleva;

            if (j < entero.enterosGrandes.size())
                prod += enterosGrandes[i] * entero.enterosGrandes[j];

            lleva = prod / 10;
            prod %= 10;

            // Sumar el producto parcial al resultado
            result.enterosGrandes[i + j] += prod;
            if (result.enterosGrandes[i + j] >= 10) {
                result.enterosGrandes[i + j] -= 10;
                lleva++;
            }
        }
    }

    // Copiar el resultado al objeto actual
    enterosGrandes = result.enterosGrandes;

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

    
    // Eliminar ceros sobrantes al frente del número
    /* while (enterosGrandes.size() > 1 && enterosGrandes.back() == 0) {
        enterosGrandes.pop_back();
    }*/
}


void BigInteger::quotient(BigInteger& divisor){
    // Crear objetos BigInteger para almacenar el cociente y el residuo
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
    
    BigInteger base(*this);      // Base (copia del objeto actual)
    BigInteger result("1");        // Resultado inicializado en 1

    while (exponent > 0) {
        if (exponent % 2 == 1) { // Si el exponente es impar
            result.product(base);
        }

        base.product(base);    // Elevar la base al cuadrado
        exponent /= 2;          // Dividir el exponente por 2
    }

    *this = result;             // Actualizar el objeto actual con el resultado
}



std::string BigInteger::toString(){
    std::string result;

    for (int i = enterosGrandes.size() - 1; i >= 0; i--) {
        result += std::to_string(enterosGrandes[i]);
    }

    return result;
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

/*
BigInteger BigInteger::operator/(BigInteger& entero){
    BigInteger division(*this);

    division.quotient(entero);

    return division;

}


BigInteger BigInteger::operator%(BigInteger& entero){
    BigInteger residuo(*this);

    residuo.remainder(entero);

    return residuo;

}*/

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




