#include "lista.h"
#include <iostream>

/*
Complejidad Algoritmica:

La complejidad del siguiente algoritmo es O(K) por la siguiente razón:
Si tenemos una lista de elementos n y buscamos insertar un elemento en dicha lista
de forma que la lista siga ordenada de menor a mayor, un caso interesante podría ser si el elemento
insertado va al inicio de la lista o al final, independientemente de cual sea el valor y la lista,
siempre habrá una posición donde el elemento quede ubicado.*/



void insertarEnListaOrdenada(Lista &l, int insertarNumero)
{
    int i = 1;
    while (i <= l.longLista() && insertarNumero < l.infoLista(i))
    {
        i++;
    }
    l.insLista(insertarNumero, i+1);

    for (int x = 1; x <= l.longLista(); x++)
    {
        cout << l.infoLista(x) << " ";
    }
    cout << endl;
}




int main()
{
  Lista l;
  int min;
  l.anxLista(5);
  l.anxLista(10);
  l.anxLista(12);
  l.anxLista(15);

  insertarEnListaOrdenada(l,11);


}