//Crear un programa que pida al usuario 10 números, calcule su media y luego muestre los que están por encima de la media
#include <stdio.h>
int main()
{
    int numbers[10];
    int average;
    int i;
    int sum = 0;
    
    for (i = 0; i < 10; i++)
    {
      printf("Input number: \n");
      scanf("%d", &numbers[i]);
    }
    
    /*
    
    for (i=0; i=9; i++)
    {
      sum += numbers[i];
    }
    
    average = sum / 10;
    
    printf("Average of all numbers is: %d \n", average);
    
    if (numbers[i] > average)  printf
    */
    
    return 0;
}