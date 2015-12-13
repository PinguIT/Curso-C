//El usuario tecleará dos números, y el programa deberá calcular cual es el resultado de su división y el resto de esa división.
#include <stdio.h>
int main()
{
    int numero1;
    int numero2;
    int division;
    int resto;
    
    printf("Teclea el primer numero:\n");
    scanf("%d", &numero1);
    printf("Teclea el segundo numero:\n");
    scanf("%d", &numero2);
    
    division = numero1 / numero2;
    
    printf("El resultado de %d entre %d es %d\n", numero1, numero2, division);
    
    resto = numero1 % numero2;
    
    printf("El resto de %d entre %d es %d\n", numero1, numero2, resto);
    
    return 0;
    
}