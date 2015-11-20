//Un programa que pida al usuario 4 números, los memorice (utilizando una tabla), calcule su media aritmética y muestre en pantalla la media y los datos tecleados.
#include <stdio.h>
int main()
{
    int number[4];
    int sum;
    int ma;
    
    printf("Value of first number: \n");
    scanf("%d", &number[0]);
    printf("Value of second number: \n");
    scanf("%d", &number[1]);
    printf("Value of third number: \n");
    scanf("%d", &number[2]);
    printf("Value of fourth number: \n");
    scanf("%d", &number[3]);
    
    sum = number[0] + number[1] + number[2] + number[3];
    ma = sum/4;
    
    printf("La media aritmética: %d\n", ma);
    printf("Los datos tecleados: %d, %d, %d, %d\n", number[0], number[1], number[2], number[3]);
    
    return 0;
}