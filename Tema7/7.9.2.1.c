//Crear un programa que halle cualquier raíz de un número. El usuario deberá indicar el número (por ejemplo, 2) y el índice de la raiz (por ejemplo, 3 para la raíz cúbica).
//Pista: hallar la raíz cúbica de 2 es lo mismo que elevar 2 a 1/3.     ( pow(x,y): x elevado a y )      gcc 7.9.2.1.c -o 7.9.2.1 -lm

#include <stdio.h>
#include <math.h>

int main()
{
    int n, ind, x, y;
    
    printf("Input number:\n");
    scanf("%d", &n);
    printf("Input second number:\n");
    scanf("%d", &ind);
    
    y = 1/ind;
    x = pow(y, n);
    
    printf("Result = %d", x);
    
    return 0;
}