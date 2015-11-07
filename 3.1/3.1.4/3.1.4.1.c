#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    
    printf("Introduce un numero: \n");
    scanf("%d", &numero1);
    
    if (numero1==0)  printf("El producto de 0 por cualquier numero es 0\n");
       else
       {
        printf("Introduce otro numero: \n");
        scanf("%d", &numero2);
        if (numero2==0) printf("El producto de cualquier numero por 0 es 0\n");
           else printf("Resultado: %d\n", numero1*numero2);
       }
    
    return 0;
}