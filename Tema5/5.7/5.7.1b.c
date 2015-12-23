#include <stdio.h>
int main()
{
    int a[5];
    int i, j, aux, lower;
    int n = 5;
    
    //pedimos numeros
    for (i = 0; i < 5; i++)
    {
        printf("Input number: \n");
        scanf("%d", &a[i]);
    }
    
    //seleccion directa
    for (i = 0; i < n-1; i++)
    {
        lower = i;
        for(j = i+1; j < n; j++)
        {
            if (a[j] < a[lower])  lower = j;
        }
        if (lower != i)
            {
                aux = a[i];
                a[i] = a[lower];
                a[lower] = aux;
            }
    }
    
    //demostramos numeros organizados
    for(i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    
    return 0;
}