//Un programa que escriba las letras de la A (a mayúscula) a la Z (z mayúscula), usando "for" y "putchar"

#include <stdio.h>
int main()
{
    char letra;
    
    for (letra=70; letra<='Z'; letra++)
    {
       putchar(letra);
    }
    return 0;
    
}