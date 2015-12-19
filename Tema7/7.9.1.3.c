//Crea un programa que muestre un "fondo estrellado" en pantalla: mostrará 24 líneas,
//cada una de las cuales contendrá entre 1 y 78 espacios(al azar)seguidos por un asterisco.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j;

    srand(times(0));
    
    for(i=0; i<24; i++)
    {
        n = rand() % 78 + 1;
        
        for(j=0; j<n; j++)
        {
            printf(" ");
        }
        
        printf("*");
        printf("\n");
    }
    
    return 0;
    
}