/*
Autores: Laura Isabel Olivero
         Santiago Arango Henao
Fecha: Mayo 5 de 2023

Implementación TAD Cola de Prioridad

 */

#include "cola-prioridad.h"

Cola::Cola(){
}

Elemento Cola::front(){
   int elementoMayor = l.infoLista(1);
   for(int i = 2; i <= l.longLista(); i++)  //Se decidio modificar esta parte de la interfaz para hacer este ejercicio
   {
      Elemento ans = l.infoLista(i);

      if(ans > elementoMayor)
         elementoMayor = ans;
   }

   return elementoMayor;
}

void Cola::enqueue(Elemento e){
   l.anxLista(e);
}

void Cola::deque(){
   int elementoMayor = l.infoLista(1);
   int quitarMayor = 1;
   for(int i = 2; i <= l.longLista(); i++)  //Se decidio modificar esta parte de la interfaz para hacer este ejercicio
   {
      Elemento ans = l.infoLista(i);

      if(ans > elementoMayor)
         elementoMayor = ans;
         quitarMayor = l.infoLista(i);
   }
   l.elimLista(quitarMayor);
}

bool Cola::vaciaCola(){
  bool ans;
  if(l.vaciaLista())
     ans = true;
  else
     ans = false;
  return ans;
}
