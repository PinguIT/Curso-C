//Un programa que te pida tu nombre y lo muestre en pantalla separando cada letra de la siguiente con un espacio.
//Por ejemplo, si tu nombre es "Juan", debería aparecer en pantalla "J u a n"
#include <stdio.h>
#include <string.h>
int main()
{
    char name [40];
    int i;
    
    printf("Input name: \n");
    scanf("%s", name);
    
    for (i=0; i<strlen(name); i++)
    {
     printf("%c ", name[i]);   
    }
    
    return 0;
}