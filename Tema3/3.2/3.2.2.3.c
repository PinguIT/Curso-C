#include <stdio.h>
int main()
{
    int x;
    
    x = 26;
    
    printf("%d\n", x);
    do
    {
        x = x - 2;
        printf("%d\n", x);
        
    }
    while (x!=10);
    
    return 0;
    
}