#include <stdio.h>
#include <math.h>
int main()
{

int a, b, c, x, y, j, i, z, r, sol1, sol2;
    
    printf("Input value of a:\n");
    scanf("%d", &a);
    printf("Input value of b:\n");
    scanf("%d", &b);
    printf("Input value of c:\n");
    scanf("%d", &c);
    
    x = pow(b, 2);
    j = 4*a*c;
    y = x-j;
    i = 2*a;
    z = sqrt(y);
    sol1 = (-b+z)/i;
    sol2 = (-b-z)/i;
    
    
    printf("  -%d±✓%d-4*%d*%d\n---------------- = %d, %d\n      2*%d\n", b, x, a, c, sol1, sol2, a);
    
    return 0;
}
    
    