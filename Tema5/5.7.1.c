//Un programa que cree un array de 5 números enteros y lo ordene con cada uno de estos tres métodos, mostrando el resultado de los pasos intermedios
#include <stdio.h>
int main()
{
    int numbers[5]={7,4,3,2,1};
    int i, j, y, menor, aux, n=5;
    //burbuja
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; i++)
        {
            if (numbers[i] > numbers[j])
            {
                aux=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=aux;
            }
        }
    }
    
    for(y=0; y<5; y++)
    {
        printf("%d  ", numbers[y]);
    }
    /*seleccion directa
    for (i=0; i<n-1; i++)
    {
        menor=i;
        for(j=i+1; j<n; i++)
        {
            if (numbers[j]<numbers[menor])  menor = j;
            if ((menor<i) || (menor>i))
            {
                aux=numbers[i];
                numbers[i]=numbers[menor];
                numbers[menor]=aux;
            }
        }
    }
     for(y=0;y<5;y++)
    {
        printf("%d  ", numbers[y]);
    }
    //insercion directa
    for (i=1; i<n; i++)
    {
        j=i-1;
        while ((j>=1) && (numbers[j]>numbers[j+1]))
        {
            aux=numbers[j];
            numbers[j]=numbers[j+1];
            numbers[j+1]=aux;
        }
    }
     for(y=0;y<5;y++)
    {
        printf("%d  ", numbers[y]);
    }
    */
    return 0;
}