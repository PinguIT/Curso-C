//Un programa que pida al usuario 10 números enteros y calcule (y muestre) cuál es el mayor de ellos
//Program that asks the user for 10 numbers and calculates which is the highest number
#include <stdio.h>
int main()
{
    int numbers[10];
    int i;
    int high = 0;
    
    printf("Input numbers: \n");
    for (i = 0; i < 10; i++)
    {
     scanf("%d", &numbers[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        if(numbers[i]>high)    
            high=numbers[i];
    }
    printf("Highest number: %d", high );
   
    return 0;
}