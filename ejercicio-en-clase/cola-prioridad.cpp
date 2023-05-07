/*
Autores: Laura Isabel Olivero
         Santiago Arango Henao
Fecha: Mayo 5 de 2023

Implementación TAD Cola de Prioridad

 */

#include "cola-prioridad.h"

/*
Complejidad: 

En la complejidad de la operación front (la cual se decidio modificar con el objetivo de la actividad)
primeramente se usa un infoLista de la implementación de listasCircularesDobles la cual tiene una complejidad 
de O(n/2), posterior a esto se hace un for del largo de la lista, el cual en el peor caso es O(n) donde n es el 
largo de la lista. Dentro del ciclo se realiza nuevamente la operacion info lista con complejidad O(n/2) y como
esta operacion se realizara tantas veces como dure el for, la complejidad sería O((n^2)/2), siendo esta la complejidad
de la nueva operación front con cola de prioridad. 
*/


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


/*
Complejidad:

De forma análoga a la operación front, en la operación  




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
