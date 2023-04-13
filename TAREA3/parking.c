#include <stdio.h>

int main()
{
	int x,z, i, numTienda, pasos;
	int numCasos = 0;
	int tamanoArregloTienda = 0;



	scanf("%d", &numCasos);
	for(x = 0; x < numCasos; x++)
	{
		scanf("%d", &tamanoArregloTienda);
		int arregloTiendas[tamanoArregloTienda];
		for(z = 0; z < tamanoArregloTienda;z++)
		{
			scanf("%d", &arregloTiendas[z]);

		}
		int mayor = 0;
		int menor = 100;
		for(i = 0; i < tamanoArregloTienda; i++)
		{
			if(menor > arregloTiendas[i])
			{
				menor = arregloTiendas[i];
			}
			if(mayor < arregloTiendas[i])
			{
				mayor = arregloTiendas[i];
			}
		}
		pasos = (mayor - menor)*2;
		printf("%d\n", pasos);
	
	}

	return 0;
}
