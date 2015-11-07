#include <stdio.h>
int main()
{
    int number;
    
    printf("Introduce un numero: \n");
    scanf("%d", &number);
    
    if (number%2==0)  printf("Numero es par");
    if (number%2!=0)  printf("Numero es impar");
    
    return 0;
    
}