//Como alternativa, crear una función que calcule el valor de elevar un número entero a otro número entero de forma NO recursiva 
//(lo que llamaremos "de forma iterativa"), usando la orden "for".

#include <stdio.h>

long func(int b, int e)
{
    int i, n=1;
    for(i=0; i<e; i++)
    {
        n *= b;
    }
    return n;
}
int main()
{
    int base, expo;
    printf("Input value of base:\n");
    scanf("%d", &base);
    printf("Input value of exponent:\n");
    scanf("%d", &expo);
    printf("%ld", func(base, expo));
    return 0;
}