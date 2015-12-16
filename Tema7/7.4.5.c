//Crear una función que devuelva la última letra de una cadena de texto. Probar esta función para calcular la última letra de la frase "Hola".
#include <stdio.h>

char text(char word[5])
{
    return word[4];
}
int main()
{
    printf("Last letter: %c", text("Hello"));
    return 0;
}