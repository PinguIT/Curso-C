//Un programa que escriba las letras de la A (a mayúscula) a la Z (z mayúscula), usando "for" y "putchar"

#include <stdio.h>
int main()
{
    char letra='A';
    char letra2='Z';
    
    for (letra=='A'; letra<=letra2; letra++)
    {
       putchar(letra);
    }
    return 0;
    
}