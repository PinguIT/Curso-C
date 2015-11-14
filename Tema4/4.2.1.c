//Un programa que pida al usuario un número hexadecimal y muestre su equivalente en base 10

#include <stdio.h>
int main()
{
    int numero;
    
    printf("Teclea un numero hexadecimal: \n");
    scanf("%x", &numero);
    printf("Su equivalente en base 10 es: %d", numero);
    
    return 0;
}