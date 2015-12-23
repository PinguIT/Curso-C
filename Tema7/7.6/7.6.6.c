//Crear una función que reciba una letra y un número, y escriba un "triángulo" formado por esa letra, que tenga como anchura inicial la que se ha indicado

#include <stdio.h>

void triangle(char l, int n)
{
    int i,j;
    
    for(i=n; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            printf("%c", l);
        }
        printf("\n");
    }
    
}
int main()
{
    int num;
    char let;
    
    printf("Input number:\n");
    scanf("%d", &num);
    getchar();
    printf("Input letter:\n");
    scanf("%c", &let);
    
    triangle(let, num);
    
    return 0;
}