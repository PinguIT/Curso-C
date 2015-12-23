#include <stdio.h>
int main()
{
    int a[5];
    int i, j, y, aux;
    int n = 5;
    
    //pedimos numeros
    for (y = 0; y < 5; y++)
    {
        printf("Input number: \n");
        scanf("%d", &a[y]);
    }
    
    //insercion directa
    for (i = 1; i < n; i++)
    {
        j = i-1;
        while ((j >= 0) && (a[j] > a[j+1]))
        {
            aux = a[j];
            a[j] = a[j+1];
            a[j+1] = aux;
            
            j = j - 1;
        }
    }
    
    //demostramos numero organizados
    for(y = 0; y < 5; y++)
    {
        printf("%d  ", a[y]);
    }
    
    return 0;
}