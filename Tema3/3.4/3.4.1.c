//Crear un programa que pida un número al usuario (entre 1 y 20) y muestre los números el 1 al 20,
//excepto el indicado por el usuario, usando "continue" para evitar ese valor.
#include <stdio.h>
int main()
{
    int numero2;
    int numero;
    
    printf("Input number between 1 and 20: \n");
    scanf("%d", &numero2);
    
    for (numero=1; numero<=20; numero++)
    {
        if (numero==numero2) continue;
        printf("%d\n", numero);
    }

    return 0;
}