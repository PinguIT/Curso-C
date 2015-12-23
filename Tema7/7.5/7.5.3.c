//Crear una función "borrarPantalla" que borre la pantalla dibujando 25 líneas en blanco. No debe devolver ningún valor.
#include <stdio.h>

void erase()
{
    int i;
    for(i=0; i<25; i++)
    {
        printf("\n");
    }
}

int main()
{
    erase();
    return 0;
}