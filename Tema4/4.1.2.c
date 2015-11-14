//Un programa que pida al usuario 2 números reales y muestre su división con 2 decimales
//(excepto si el segundo es 0; en ese caso, deberá decir "no se puede dividir").
#include <stdio.h>
int main()
{
    float numero;
    float numero2;
    
    printf("Input first number: \n");
    scanf("%f", &numero);
    printf("Input second number: \n");
    scanf("%f", &numero2);
    
    if ((numero==0) || (numero2==0))  printf("No se puede dividir");
       else  printf("Su división es: %5.2f \n", numero/numero2);
    
    return 0;
    
}