//Crear un programa que calcule cuantas cifras tiene un número entero positivo (pista: se puede hacer dividiendo varias veces entre 10)
#include <stdio.h>
int main()
{
    int numero;
    int numero2 = 1;
    
    printf("Introduce un numero entero positivo: \n");
    scanf("%d", &numero);
    
    while(numero/10>0)
    {
        numero = numero / 10;
        numero2++;
    }
    printf("Tiene %d dígitos\n", numero2);
    
    return 0;
}