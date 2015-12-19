//Crear un programa que halle cualquier raíz de un número. El usuario deberá indicar el número (por ejemplo, 2) y el índice de la raiz (por ejemplo, 3 para la raíz cúbica).
//Pista: hallar la raíz cúbica de 2 es lo mismo que elevar 2 a 1/3.     ( pow(x,y): x elevado a y )      gcc -o 7.9.2.1 7.9.2.1.c -lm  ./7.9.2.1

#include <stdio.h>
#include <math.h>

int main()
{
    float n, ind, y;
    
    printf("Input number:\n");
    scanf("%f", &n);
    printf("Input index:\n");
    scanf("%f", &ind);
    
    y = 1/ind;
    
    printf("Result = %.3f\n", pow(n, y));
    
    return 0;
}