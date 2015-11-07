//numeros pares del 26 al 10 utilizando while
#include <stdio.h>
int main()
{
    int x;
    
    x = 26;
    
    printf("%d\n", x);
    
    while (x!=10)
    {
        x = x - 2;
        printf("%d\n", x);
        
    }
    
    return 0;
    
}