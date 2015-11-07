#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    
    printf("Introduce un numero: \n");
    scanf("%d", &numero1);
    printf("Introduce otro numero: \n");
    scanf("%d", &numero2);
    
    if (numero2==0)  printf("Error: no se puede dividir entre 0");
    if (numero2!=0)  printf("Resultado: %d", numero1/numero2);

    return 0;
}