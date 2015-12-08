//Un programa que te pida una frase y la muestre en pantalla sin espacios. Por ejemplo, si la frase es "Hola, como estás", debería aparecer en pantalla "Hola,comoestás
#include <stdio.h>
#include <string.h>
int main ()
{
    char text [40];
    int i;
    
    printf("Input text: \n");
    gets(text);
    
    for (i=0; i<strlen(text); i++)
    {
        if (text[i]!= ' ')  printf("%c", text[i]);
    }
    
    return 0;
}