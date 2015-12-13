//Crear un programa que lea una letra tecleada por el usuario y diga si se trata de una vocal, una cifra numérica o una consonante.
#include<stdio.h>
int main()
{
    char letra;
    
    printf("Teclea una letra: \n");
    scanf("%c", &letra);
    
    switch (letra)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("%c es un vocal", letra);
                 break;
        case 'x':
        case 'y':
        case 'z': printf("%c es una cifra numerica", letra);
                 break;
        default: printf("%c es un consonante", letra);
        
    }
    
    return 0;
    
}