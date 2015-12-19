//Crea un programa que escriba varias veces "Hola" (entre 5 y 10 veces, al azar).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, i;
    
    srand(time(0));
    
    n = rand() % 6 + 5;
    
    for(i=0; i<n; i++)
    {
        printf("Hello ");
    }
    
    return 0;
}
