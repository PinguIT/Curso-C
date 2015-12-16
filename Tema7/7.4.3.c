//Crear una función llamada "signo", que reciba un número real, y devuelva un número entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.
#include <stdio.h>

int signo (float n)
{
    
    if(n<0) return -1;
    if(n>0) return 1;
    if (n==0) return 0;
}

main()
{
    float n;
    
    printf("Input number:\n");
    scanf("%f", &n);
    printf("%d", signo(n));
    return 0;
}
