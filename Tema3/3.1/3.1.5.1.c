//Crear un programa que pida una letra al usuario y diga si se trata de una vocal.
#include <stdio.h>
int main()
{
    
    char letra;
    
    printf("Introduce una letra: \n");
    scanf("%c", &letra);
    
    if ((letra=='a') || (letra=='e') || (letra=='i') || (letra=='o') || (letra=='u'))  printf("Se trata de un vocal");
       else  printf("Se trata de un consonante");
    
    
    return 0;
    
}