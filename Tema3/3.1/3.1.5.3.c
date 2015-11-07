#include<stdio.h>
int main()
{
    int numero1;
    int numero2;
    int numero3;
    
    printf("Introduce el primer numero: \n");
    scanf("%d", &numero1);
    printf("Introduce el segundo numero: \n");
    scanf("%d", &numero2);
    printf("Introduce el tercer numero: \n");
    scanf("%d", &numero3);
    
    if ((numero1>numero2) && (numero1>numero3))  printf("%d es el mayor numero", numero1);
    if ((numero2>numero1) && (numero2>numero3))  printf("%d es el mayor numero", numero2);
    if ((numero3>numero1) && (numero3>numero2))  printf("%d es el mayor numero", numero3);
    
    return 0;
    
}