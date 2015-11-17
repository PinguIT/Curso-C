//Crear un programa que descomponga un número (que teclee el usuario) como
//producto de sus factores primos. Por ejemplo, 60 = 2 · 2 · 3 · 5
#include <stdio.h>
int main()
{
    int numero;
    int numero2 = 1;
    int numero3;
    
    printf("Input number: \n");
    scanf("%d", &numero);
    
    while (numero!=0)
    {
        if (numero%numero2==0)   numero=numero/numero2;
        
        printf("%d", numero2);
        
        numero2++;
    }
    
    return 0;
}