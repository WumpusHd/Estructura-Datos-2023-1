/*
Autor: Carlos Ramírez
Fecha: Abril 28 de 2023

Implementación TAD Cola

 */

#ifndef  COLA_H
#define COLA_H

#include "lista.h"

typedef int Elemento;

class Cola{
   Lista l;

   public:
      Cola(); // crearCola
      Elemento front();
      void deque();
      void enqueue(Elemento);
      bool vaciaCola();
};

#endif
