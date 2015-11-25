//Crear un programa que pida al usuario 10 números y luego los muestre en orden inverso (del último al primero)
#include<stdio.h>
int main()
{
    int numbers[10];
    int i;
    
    for (i=10; i>0; i--)
    {
      printf("Input number: \n");
      scanf("%d", &numbers[i]);
    }
    
    printf("Numbers in reverse: %d \n", );
    
    return 0;
}