//Un programa que pida al usuario 5 números reales y luego los muestre en el orden contrario al que se introdujeron
#include <stdio.h>
int main()
{
    int numero[5];
    
    printf("Input value of first number: \n");
    scanf("%d", &numero[0]);
    printf("Input value of the second number: \n");
    scanf("%d", &numero[1]);
    printf("Input value of third number: \n");
    scanf("%d", &numero[2]);
    printf("Input value of fourth number: \n");
    scanf("%d", &numero[3]);
    printf("Input value of fifth number: \n");
    scanf("%d", &numero[4]);
    
    printf("Los numeros son: %d, %d, %d, %d, %d", numero[4], numero[3], numero[2], numero[1], numero[0]);
    
    return 0;
    
}