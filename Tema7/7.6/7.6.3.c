//Crear una función "esPrimo", que reciba un número y devuelva el valor 1 si es un número primo o 0 en caso contrari.o

#include <stdio.h>

int prime(int n)
{
    if (n%2==0)  return 1;
    if (n%2!=0)   return 0;
}
int main()
{
    int num;
    
    printf("Input number:\n");
    scanf("%d", &num);
    
    prime(num);
    
    printf("%d", prime(num));
    
    return 0;
}