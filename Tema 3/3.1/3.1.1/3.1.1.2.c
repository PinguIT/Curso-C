#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    
    printf("Introduce el primer numero: \n");
    scanf("%d", &numero1);
    printf("Introduce el segundo numero: \n");
    scanf("%d", &numero2);
    
    if (numero1>numero2)  printf("%d es el mayor numero.\n", numero1);
    if (numero2>numero1)  printf("%d es el mayor numero.\n", numero2);
    
    return 0;
}