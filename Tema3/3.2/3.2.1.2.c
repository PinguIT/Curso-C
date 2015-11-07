#include<stdio.h>
int main()
{
    int x;
    int y;
    
    y = 1;
    
    while (x!=10)
    {
        x = y++;
        printf("%d\n", x);
    }
    
    return 0;
    
}