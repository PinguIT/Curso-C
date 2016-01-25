//Crear un programa que emplee recursividad para dar la vuelta a una cadena de caracteres (por ejemplo, a partir de "Hola" devolvería "aloH").
#include <stdio.h>
#include <string.h>
int func(char word[], int n)
{
    return func(word, n-1);
}
int main()
{
    char word[10];
    int n;
    
    printf("Input word:\n");
    scanf("%s", word);
    
    n = strlen(word);
    
    printf("Backwards: %c\n", func(word, n));
    
    return 0;
}