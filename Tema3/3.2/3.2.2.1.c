//Crear un programa que pida números positivos al usuario, y vaya calculando la suma de todos ellos (terminará cuando se teclea un número negativo o cero).
#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int resultado;
    
    do
    {
        printf("Input first number: \n");
        scanf("%d", &numero1);
        printf("Input second number: \n");
        scanf("%d", &numero2);
        resultado = numero1 + numero2;
        printf("Resultado: %d\n", resultado);
    }
    while ((numero1>0) && (numero2>0));
    
    return 0;
    
}