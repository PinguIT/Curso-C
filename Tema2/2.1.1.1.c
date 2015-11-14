//Multiplicar dos números de 4 cifras que teclee el usuario, usando el modificador "long"

#include <stdio.h>
int main()
{
    long int numero;
    long int numero2;
    
    printf("Teclea un numero: \n");
    scanf("%ld", &numero);
    printf("Teclea otro numero: \n");
    scanf("%ld", &numero2);
    
    printf("%ld * %ld : %ld \n", numero, numero2, numero*numero2);
    
    return 0;
    
}