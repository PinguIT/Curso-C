//El usuario tecleará dos números, y el programa mostrar el resultado de la operación (a+b)*(a-b) y el resultado de la operación a2-b2.
#include <stdio.h>
int main()
{
    int numero1;
    int numero2;
    int resultado1;
    int resultado2;
    
    printf("Teclea el primer numero:\n");
    scanf("%d", &numero1);
    printf("Teclea el segundo numero:\n");
    scanf("%d", &numero2);
    
    printf("Primera forma: %d\n", (numero1+numero2)*(numero1-numero2));
    printf("Segunda forma: %d\n", (numero1*numero1)-(numero2*numero2));
    
    return 0;
}