
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int j;
    scanf("%d", &j);
    int secuenciaNumeros[j];
    for (int x = 0; x < j ; x++)
    {
        scanf("%d", &secuenciaNumeros[x]);
    }
    int esJolly = 1;
    for (int x = 0; x <= j ; x++)
    {
        int diferencia = abs(secuenciaNumeros[x] - secuenciaNumeros[x+1]);
        if (diferencia >= j || diferencia == 0)
        {
            esJolly = 0;
            
        }
        if (esJolly)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
        
    }
    
    return 0;
}
