//Crear un programa que pida al usuario dos números enteros cortos y diga si son iguales o, en caso contrario, cuál es el mayor de ellos.
#include <stdio.h>
int main()
{
    int numero1;
    int numero2;
    
    printf("Introduce un numero: \n");
    scanf("%d", &numero1);
    printf("Introduce otro numero: \n");
    scanf("%d", &numero2);
    
    if (numero1==numero2)  printf("Valen lo mismo");
    if (numero1>numero2)   printf("%d es mayor que %d", numero1, numero2);
    if (numero1<numero2)   printf("%d es mayor que %d", numero2, numero1);
    
    return 0;
    
}