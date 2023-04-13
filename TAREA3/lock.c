#include <stdio.h>
/*int main()
{
	int posicionInicial = 0;
	int primeraCombinacion, segundaCombinacion, TerceraCombinacion,x;
	int cantidadGrados = 0;
	scanf("%d %d %d %d", &posicionInicial, &primeraCombinacion, &segundaCombinacion, &TerceraCombinacion);
	while(posicionInicial != 0, primeraCombinacion != 0, segundaCombinacion != 0, TerceraCombinacion !=0)
	{
		for (x = 0; x < 3; ++x)
		{
			if(primeraCombinacion - posicionInicial == 30)
		{
			cantidadGrados = 9*(120 + primeraCombinacion);
		}
		else if (primeraCombinacion - posicionInicial == 20)
		{
			cantidadGrados = 9*(120 + segundaCombinacion);
		}
		else if (primeraCombinacion - posicionInicial == 10)
		{
			cantidadGrados = 9*(120 +TerceraCombinacion);
		}
		}
		
		
		printf("%d\n", cantidadGrados );
		scanf("%d %d %d %d", &posicionInicial, &primeraCombinacion, &segundaCombinacion, &TerceraCombinacion);


		


	}
	

	return 0;
	
}*/

#include <stdio.h>

int main() {
    int posicionInicial, combinacion1, combinacion2, combinacion3;
    scanf("%d %d %d %d", &posicionInicial, &combinacion1, &combinacion2, &combinacion3);

    while (posicionInicial != 0 || combinacion1 != 0 || combinacion2 != 0 || combinacion3 != 0) {
        int gradosTotales = 1080; // comenzamos con los 1080 grados iniciales

        // Primera combinación
        gradosTotales += ((posicionInicial - combinacion1 + 40) % 40) * 9;

        // Segunda combinación
        gradosTotales += ((combinacion2 - combinacion1 + 40) % 40) * 9;

        // Tercera combinación
        gradosTotales += ((combinacion2 - combinacion3 + 40) % 40) * 9;

        printf("%d\n", gradosTotales);

        scanf("%d %d %d %d", &posicionInicial, &combinacion1, &combinacion2, &combinacion3);
    }

    return 0;
}
