#include <stdio.h>
int main()
{
    int numero1;
    int numero2;
    
    printf("Introduce el primer numero: \n");
    scanf("%d", &numero1);
    printf("Introduce el segundo numero: \n");
    scanf("%d", &numero2);
    
    if (numero1%numero2==0)  printf("%d es multiplo de %d", numero1, numero2);
    if (numero1%numero2!=0)  printf("%d no es multiplo de %d", numero1, numero2);
    
    return 0;
}