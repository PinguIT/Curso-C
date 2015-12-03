//Un programa que pida en primer lugar la cifra numérica y después tu nombre, y luego escriba el nombre tantas veces como indique esa cifra numérica.
#include <stdio.h>
int main()
{
    char name[40];
    int times;
    int i;
    
    printf("Input number of times: \n");
    scanf("%d", &times);
    printf("Input name: \n");
    scanf("%s", name);
    
    for (i=0; i<times; i++)
    {
        printf("%s ", name);
    }
    return 0;
}