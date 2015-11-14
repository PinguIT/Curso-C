//Un programa que pida al usuario un número entero y muestre sus equivalentes en formato hexadecimal y en octal.
//Deberá seguir pidiendo (y convirtiendo) números hasta que se introduzca 0.
#include <stdio.h>
int main()
{
    int numero;
    
    do
    {
     printf("Input number: \n");
     scanf("%d", &numero);
     if (numero>0)
     {
         printf("%x\n", numero);
         printf("%o\n", numero);
     }
    }
    while (numero!=0);
    
    return 0;
}