#include <stdio.h>

int func(int v[], int n)
{
    int m;
    if (n==1)  return v[0];
    else
    {
        m = func(v, n-1);
        if (v[n-1] > m)  return v[n-1];
        else  return m;
    }
}

int main()
{
    int vector[5];
    int i;
    
    for(i=0; i<5; i++)
    {
        printf("Input value of vector : %d\n", i);
        scanf("%d", &vector[i]);
    }
    
    printf("Higher: %d", func(vector, 5));
    
    return 0;
}