//Un programa que pida al usuario 10 números enteros y calcule (y muestre) cuál es el mayor de ellos
//Program that asks the user for 10 numbers and calculates which is the highest number
#include <stdio.h>
int main()
{
    int numbers[10];
    int i;
    
    for (i = 0; i < 10; i++)
    {
     printf("Input number: \n");
     scanf("%d", &numbers[i]);
    }
    
    
   
   return 0;
}