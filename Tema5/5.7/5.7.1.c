//Un programa que cree un array de 5 números enteros y lo ordene con cada uno de estos tres métodos, mostrando el resultado de los pasos intermedios
#include <stdio.h>
int main()
{
    int a[5];
    int i, j, aux;
    int n = 5;
    //pedimos numeros
    for (i = 0; i < 5; i++)
    {
        printf("Input number: \n");
        scanf("%d", &a[i]);
    }
    //burbuja
    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
    //demostramos numeros organizados
    for(i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }
    
    return 0;
}