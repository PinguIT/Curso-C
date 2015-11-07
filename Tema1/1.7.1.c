#include <stdio.h>
int main()
{
    int numero1;
    int numero2;
    int resultado;
    
    printf("Teclea el primer numero:\n");
    scanf("%d", &numero1);
    printf("Teclea el segundo numero:\n");
    scanf("%d", &numero2);
    
    resultado = numero1 * numero2;
    
    printf("El resultado es %d", resultado);
    
    return 0;
    
}