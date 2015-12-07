//Un programa que te pida tu nombre (usando "gets") y una cifra numérica, y escriba tu nombre tantas veces como indique esa cifra numérica.
#include <stdio.h>
int main()
{
    char name[40];
    int times;
    int i;
    
    printf("Input name: \n");
    gets(name);
    printf("Input numeric value: \n");
    scanf("%d", &times);
    
    for (i=0; i<times; i++)
    {
        printf("%s  ", name);
    }
    
    return 0;
}