#include "lista.h"


Lista::Lista()
{
	act = NULL;
}


void Lista::anxLista(int elemento){
  Nodo *temporal, *primero;
  Nodo* nuevo = new Nodo;
  nuevo->dato = elemento;
  nuevo->sig = nuevo;
  nuevo->ant = nuevo;

  if(act == NULL)
    act = nuevo;
  else{
    temporal = act->ant;
    temporal->sig = nuevo;
    nuevo->ant = temporal;
    nuevo->sig = act;
    act->ant = nuevo;
  }
}

int Lista::infoLista(int posicion){
  Nodo* temporal = act;
  for(int i = 1; i < posicion; i++)
    temporal = temporal->sig;

  return temporal->dato;
}


int Lista::longLista(){
  int ans;
  if(vaciaLista())
    ans = 0;
  else{
    Nodo* temporal, *primero;
    int contador = 1;
    temporal = act;
    primero = act;

    while(temporal->sig != primero){
      temporal = temporal->sig;
      contador++;
    }

    ans = contador;
  }

  return ans;
}



