//Crear un programa que escriba en pantalla los números del 1 al 50 que sean múltiplos de 3
#include <stdio.h>
int main()
{
    int i;
    
    for(i=0; i<50; i++)
    {
        if(i%3==0)  printf("%d ", i);
    }

       
    return 0;
}