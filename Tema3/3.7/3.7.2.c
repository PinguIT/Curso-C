//Crear un programa que descomponga un número (que teclee el usuario) como
//producto de sus factores primos. Por ejemplo, 60 = 2 · 2 · 3 · 5
#include <stdio.h>
int main()
{
    int numero;
    int numero2 = 2;
    
    
    printf("Introduce numero para factorizar: \n");
    scanf("%d", &numero);
    
    do
    {
        if (numero%numero2==0)
        {
         
            numero=numero/numero2;
            printf("%d  ", numero2);
        }
        else  numero2++;
    }
    while (numero>1);
    
    return 0;
}