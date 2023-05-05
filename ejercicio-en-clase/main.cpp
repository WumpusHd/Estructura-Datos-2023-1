#include "cola-prioridad.h"
#include <cstdio>


int main()
{
	Cola l;
	l.enqueue(5);
	l.enqueue(2);
	l.enqueue(8);
	l.enqueue(7);
	l.enqueue(3);
	printf("%d\n", l.front());

	l.deque();
	printf("%d\n", l.front());






}