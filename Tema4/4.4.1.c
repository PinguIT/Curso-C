//Un programa que pida al usuario 4 letras (usando "getchar") y las muestre en orden inverso (por ejemplo, si las letras son "h o l a", escribiría "aloh").

#include <stdio.h>
int main()
{
    char letra, letra2, letra3, letra4;
    
    printf("Teclea cuatro letras: \n");
    
    letra = getchar();
    letra2 = getchar();
    letra3 = getchar();
    letra4 = getchar();
    
    printf("Has tecleado %c%c%c%c", letra4, letra3, letra2, letra);
    
    return 0;
}