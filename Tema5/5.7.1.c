//Un programa que cree un array de 7 números enteros y lo ordene con cada uno de estos tres métodos, mostrando el resultado de los pasos intermedios
//BURBUJA-->Para i=1 hasta n-1   Para j=i+1 hasta n   Si A[i] > A[j] Intercambiar ( A[i], A[j])
//SELECCION DIRECTA-->Para i=1 hasta n-1   menor = i   Para j=i+1 hasta n   Si A[j] < A[menor]   menor = j   Si menor <> i   Intercambiar ( A[i], A[menor])
//INSERCION DIRECTA-->Para i=2 hasta n   j=i-1   mientras (j>=1) y (A[j] > A[j+1])   Intercambiar ( A[j], A[j+1]) j = j - 1
#include <stdio.h>
#include <string.h>
int main()
{
    
    int numbers[7], i, j, menor;
    
    for (i=0; i<7; i++)
    {
        printf("Input number:\n");
        scanf("%d", &numbers[i]);
    }
    
    //burbuja
    for (i=1; i<=6; i++)
    {
        for (j=i+1; j<=7; i++)
        {
            if (numbers[i] > numbers[j])   printf("%d  %d  ", numbers[i], numbers[j]);
        }
    }  
    //seleccion directa
    for (i=1; i<=6; i++)
    {
        menor = i;
        for (j=i+1; j<=7; j++)
        {
            if (numbers[j] < numbers[menor])   menor = j;
            if ((menor < i) || (menor > i))    printf("%d  %d  ", numbers[i], numbers[menor]);
        }
        
    }
    //insercion directa
    for (i=2; i<=7; i++)
    {
        j=i+1;
        while ((j>=1) && (numbers[j] > numbers[j+1]))
        {
            printf("%d  %d  ", numbers[j], numbers[j+1]);
            j = j-1;
        }
    }
    
    return 0;
}