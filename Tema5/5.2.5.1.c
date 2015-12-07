//Un programa que te pida una palabra, y la almacene en la variable llamada "texto". Luego deberá pedir una segunda palabra, y añadirla al final de "texto".
//Finalmente, deberá pedir una tercera palabra, y guardarla en la variable "texto" y en otra variable llamada "texto2".
#include <stdio.h>
#include <string.h>
int main()
{
    char text[40], text2[40], text3[40];
    
    printf("Input text1: \n");
    scanf("%s", text);
    printf("Input text2: \n");
    scanf("%s", text2);
    strcat (text, text2);
    printf("Input text3: \n");
    scanf("%s", text3);
    strcat (text, text3);
    strcat (text2, text3);
    
    printf("%s, %s, %s", text, text2, text3);
    
    return 0;
}