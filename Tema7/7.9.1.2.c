//Crea un programa que genere un número al azar entre 1 y 100. El usuario tendrá 6 oportunidades para acertarlo
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x, y;
    int tries = 0;
    
    srand(time(0));
    
    x = rand() % 100 + 1;
    
   // printf("%d", x);
    
    do
    {
        printf("Input number:\n");
        scanf("%d", &y);
        tries++;
    }
    while ((y!=x) && (tries!=6));
    
    return 0;
}