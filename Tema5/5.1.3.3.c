//Crear un programa que pida al usuario 10 números, calcule su media y luego muestre los que están por encima de la media
//Create a program that asks the user for 10 numbers, calculates the average of the numbers and then demonstrates the numbers that are above the average.
#include <stdio.h>
int main()
{
    int numbers[10];
    int i;
    int average = 0;
    int sum = 0;
    
    for (i = 0; i < 10; i++)
    {
      printf("Input number: \n");
      scanf("%d", &numbers[i]);
    }
    
    
    for (i=0; i<=9; i++)
    {
      sum += numbers[i];
    }
    
    average = sum / 10;
    
    printf("Average of all numbers is: %d \n", average);
    
    
   //missing demonstration of numbers above average
    
    
    return 0;
}