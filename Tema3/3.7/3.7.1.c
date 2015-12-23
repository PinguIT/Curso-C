//Crear un programa que dé al usuario la oportunidad de adivinar un número del 1 al 100 (prefijado en el programa) en un máximo de 6 intentos.
//En cada pasada deberá avisar de si se ha pasado o se ha quedado corto.
#include <stdio.h>
int main()
{
    int numero = 67;
    int numero2;
    int intentos = 0;

    do
    {
        printf("Adivina un numero entre 1 y 100\n");
        scanf("%d", &numero2);
        if (numero2<numero)  printf("Mas alto!\n");
        if (numero2>numero)  printf("Mas bajo!\n");
        intentos++;
    } while ((numero2!=67) && (intentos<6));
        
    if (numero2==67)  printf("Acertado!");
        
    return 0;
}