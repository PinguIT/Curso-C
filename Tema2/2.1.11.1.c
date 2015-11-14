//Crear un programa que use tres variables x,y,z. Sus valores iniciales serán 15, -10, 214.
//Se deberá incrementar el valor de estas variables en 12, usando el formato abreviado.

#include <stdio.h>
int main()
{
    int x = 15;
    int y = -10;
    int z = 214;
    
    x += 12;
    y += 12;
    z += 12;
    
    printf("Los nuevos valores son: %d , %d y %d", x, y, z);
    
    return 0;
}