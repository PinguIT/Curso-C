//Crear un programa que pida al usuario 10 números y luego los muestre en orden inverso (del último al primero)
#include<stdio.h>
int main()
{
    int numbers[10];
    int i;
    
    for (i = 0; i < 10; i++)
    {
      printf("Input number: \n");
      scanf("%d", &numbers[i] );
    }
   
    for (i = 9; i >= 0; i--)
    {
      printf("%d  ", numbers[i]);
    }

/*  with while:

   i = 9;
   while (i >= 0)
   {
      printf("%d  ", numbers[i]);
      i--;
   }
   
*/  
    
    return 0;
}