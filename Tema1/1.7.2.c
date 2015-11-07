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
    
    resultado1 = numero1 / numero2;
    
    printf("El resultado de %d entre %d es %d\n", numero1, numero2, resultado1);
    
    resultado2 = numero1 % numero2;
    
    printf("El resto de %d entre %d es %d\n", numero1, numero2, resultado2);
    
    return 0;
    
}