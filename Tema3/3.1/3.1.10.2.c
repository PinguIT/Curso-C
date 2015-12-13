//Crear un programa que lea una letra tecleada por el usuario y diga si se trata de un signo de puntuación, una cifra numérica o algún otro carácter.
#include <stdio.h>
int main()
{
    char letra;
    
    printf("Teclea una letra: \n");
    scanf("%c", &letra);
    
    switch (letra)
    {
        case 'x':
        case 'y':
        case 'z': printf("%c es una cifra numerica\n", letra);
                 break;
        case ',':
        case '.':
        case ':':
        case ';': printf("%c es un signo de puntuacion\n", letra);
                 break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("%c es un vocal\n", letra);
                 break;
        default: printf("%c es un consonante\n", letra);
        
    }
    
    return 0;
}