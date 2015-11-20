//Un programa que pida al usuario un número entero y muestre sus equivalentes en formato hexadecimal y en octal.
//Deberá seguir pidiendo (y convirtiendo) números hasta que se introduzca 0.
#include <stdio.h>
int main()
{
    int number;
    
    do
    {
     printf("Input number: \n");
     scanf("%d", &number);
     if (number>0)
     {
         printf("%x\n", number);
         printf("%o\n", number);
     }
    }
    while (number!=0);
    
    return 0;
}