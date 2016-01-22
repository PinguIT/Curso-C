//Crear una función que calcule el valor de elevar un número entero a otro número entero (por ejemplo, 5 elevado a 3 = 5^3 = 5 ·5 · 5 = 125). 
//Esta función se debe crear de forma recursiva.

#include <stdio.h>

long pot(int b, int e)
{
    if (e==1)  return b;
    
    else  return  b * pot(b, e-1);
}
int main()
{
    int base, expo;
    printf("Input base number:\n");
    scanf("%d", &base);
    printf("Input exponent number:\n");
    scanf("%d", &expo);
    printf("The factorial is %ld\n", pot(base, expo));
}