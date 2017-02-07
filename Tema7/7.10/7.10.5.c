//Crear un programa que emplee recursividad para calcular el mayor de los elementos de un vector

#include <stdio.h>
int func(int vec[], int ini, int fin)
{
    int m;
    
    if(ini==fin)  return vec[ini];
    else
    {
        m = func(vec, ini+1, fin);
        if(vec[ini]>m)  return vec[ini];
        else  return m;
    }
}
int main()
{
    int vector[5];
    int i;
    
    for(i=0;i<5;i++)
    {
        printf("Input value of vector %d:\n", i);
        scanf("%d", &vector[i]);
    }
    
    printf("El mayor numero: %d", func(vector, 0, 4));
    
    return 0;
}