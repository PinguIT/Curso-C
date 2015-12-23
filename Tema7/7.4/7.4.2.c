//Crear una función que calcule cual es el menor de dos números enteros. El resultado será otro número entero.
#include <stdio.h>

int lower(int x, int y)
{
    if (x<=y)  return x;
    if (y<=x)  return y;
}

int main()
{
    int i, j;
    
    printf("Input number:\n");
    scanf("%d", &i);
    printf("Input number:\n");
    scanf("%d", &j);
    
    printf("Lowest: %d", lower(i, j));
    
    return 0;
}