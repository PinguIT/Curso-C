//Crear un programa que use tres variables x,y,z. Sus valores iniciales serán 15, -10, 2147483647.
//Se deberá incrementar el valor de estas variables.

#include <stdio.h>
int main()
{
    int x = 15;
    int y = -10;
    long int z = 2147483647;
    
    x++;
    y++;
    z++;
    
    printf("El nuevo valor de x es %d\n", x);
    printf("El nuevo valor de y es %d\n", y);
    printf("El nuevo valor de z es %ld\n", z);
    
    return 0;
    
}