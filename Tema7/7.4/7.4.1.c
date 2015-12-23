//Crear una función que calcule el cubo de un número real (float). El resultado deberá ser otro número real. Probar esta función para calcular el cubo de 3.2 y el de 5.
#include <stdio.h>

float cube(float x)
{
    return x * x * x;
}

int main()
{
    printf("El cubo de 3.2 es %.3f\n", cube(3.2));
    printf("El cubo de 5 es %.0f\n", cube(5));
    
    return 0;
}
