//Crear una función que devuelva la primera letra de una cadena de texto.
//Probar esta función para calcular la primera letra de la frase "Hola"
#include <stdio.h>

char text(char word[5])
{
    return word[0];
}
int main()
{
    printf("First letter: %c", text("Hello"));
    
    return 0;
}