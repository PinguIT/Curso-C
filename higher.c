#include <stdio.h>

int func(int v[], int ini, int fin)
{
    int i;
    int high = v[ini];
    
    for(i=ini; i<=fin; i++)
    {
        if(v[i]>high)   high = v[i];
    }
    
    return high;
}
int main()
{
    int vec[5]={6,3,7,9,4};
    
    printf("%d", func(vec, 0, 4));
    
    return 0;
}