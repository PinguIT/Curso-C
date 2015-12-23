//Crear una función "mostrarPerimSuperf" que reciba un número y muestre en pantalla el perímetro y la superficie de un cuadrado
//que tenga como lado el número que se ha indicado como parámetro.
#include <stdio.h>

void permsupr(int x)
{
    printf("Perímetro = %d\n", x*4);
    printf("Superficie = %d\n", x*x);
}

int main()
{
    int side;

    printf("Input size:\n");
    scanf("%d", &side);

    permsupr(side);

    return 0;
}