//Un programa que pida al usuario una letra, después le pida una segunda letra, y las muestre en el orden contrario al que se introdujeron.

#include <stdio.h>

int main()
{
    char letra, letra2;
    
    printf("Teclea una letra: \n");
    scanf("%s", &letra);
    printf("Teclea otra letra: \n");
    scanf("%s", &letra2);
    
    printf("%c", letra2);
    printf("%c\n", letra);
    
    return 0;
}