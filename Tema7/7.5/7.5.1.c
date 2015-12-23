//Crear una función "escribirGuiones" que escriba en pantalla tantos guiones ("-") como se indique como parámetro y no devuelva ningún valor.
#include <stdio.h>

void write(int x)
{
    int i;
    for(i=0; i<x; i++)
    {
        printf("-");
    }
}

int main()
{
    int times;
    
    printf("How many times?:\n");
    scanf("%d", &times);
    
    write(times);
    
    return 0;
}