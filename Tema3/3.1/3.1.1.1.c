//Crear un programa que pida al usuario un número entero y diga si es par (pista: habrá que comprobar si el resto que se obtiene al dividir entre dos es cero:
//if (x % 2 == 0) …).
#include <stdio.h>
int main()
{
    int number;
    
    printf("Introduce un numero: \n");
    scanf("%d", &number);
    
    if (number%2==0)  printf("Numero es par");
    if (number%2!=0)  printf("Numero es impar");
    
    return 0;
    
}