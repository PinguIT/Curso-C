//Un programa que pida al usuario 5 números reales y luego los muestre en el orden contrario al que se introdujeron
#include <stdio.h>
int main()
{
    int number[5];
    
    printf("Input value of first number: \n");
    scanf("%d", &number[0]);
    printf("Input value of the second number: \n");
    scanf("%d", &number[1]);
    printf("Input value of third number: \n");
    scanf("%d", &number[2]);
    printf("Input value of fourth number: \n");
    scanf("%d", &number[3]);
    printf("Input value of fifth number: \n");
    scanf("%d", &number[4]);
    
    printf("The numbers are: %d, %d, %d, %d, %d", number[4], number[3], number[2], number[1], number[0]);
    
    return 0;
    
}