//Un programa que pida al usuario 4 números, los memorice (utilizando una tabla), calcule su media aritmética y muestre en pantalla la media y los datos tecleados.
#include <stdio.h>
int main()
{
    int numero[4];
    int suma;
    int ma;
    
    printf("Value of first number: \n");
    scanf("%d", &numero[0]);
    printf("Value of second number: \n");
    scanf("%d", &numero[1]);
    printf("Value of third number: \n");
    scanf("%d", &numero[2]);
    printf("Value of fourth number: \n");
    scanf("%d", &numero[3]);
    
    suma = numero[0] + numero[1] + numero[2] + numero[3];
    ma = suma/4;
    
    printf("La media aritmética: %d\n", ma);
    printf("Los datos tecleados: %d, %d, %d, %d\n", numero[0], numero[1], numero[2], numero[3]);
    
    return 0;
}