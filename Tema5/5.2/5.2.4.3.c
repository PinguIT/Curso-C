//Un programa que pida en primer lugar la cifra numérica y después tu nombre (con "gets"), y luego escriba el nombre tantas veces como indique esa cifra numérica.
#include <stdio.h>
int main()
{
    char name[40];
    int times;
    int i;
    
    printf("Input numeric value: \n");
    scanf("%d", &times);
    getchar();
    printf("Input name: \n");
    gets(name);
    
    for (i=0; i<times; i++)
    {
        printf("%s  ", name);
    }
    
    return 0;
}