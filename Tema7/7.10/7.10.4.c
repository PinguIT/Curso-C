//Crear un programa que emplee recursividad para calcular la suma de los elementos de un vector.

#include <stdio.h>

int func(int vec[], int ini, int fin)
{
    if (ini==fin)  return vec[ini];
    else return func(vec, ini, ini) + func(vec, ini+1, fin);
}
int main()
{
    int vector[5];
    int i=0;
    
    for(i=0;i<5;i++)
    {
        printf("Input value of vector %d:\n", i);
        scanf("%d", &vector[i]);
    }
    
    printf("Sum of numbers: %d", func(vector, 0, 4));
    
    return 0;
}