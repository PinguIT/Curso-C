/*(-b+sqrt(pow(b,2)-4*a*c))/2*a
±
(-b-sqrt(pow(b,2)-4*a*c))/2*a
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, sol_pos, sol_neg, expo, sqrot;
    
    printf("Input value of a:\n");
    scanf("%d", &a);
    printf("Input value of b:\n");
    scanf("%d", &b);
    printf("Input value of c:\n");
    scanf("%d", &c);
    
    expo = pow(b, 2);
    sqrot = sqrt(expo-4*a*c);
    sol_pos = (-b+sqrot)/2*a;
    sol_neg = (-b-sqrot)/2*a;
    
    if ( ((-b+sqrot)%(2*a)==0) && ((-b-sqrot)%(2*a)==0) )
    {
        if(sqrot/1<0)  printf()
        printf("     -(%d)+√%d-4*%d*%d\nx1 = ---------------- = %d\n          2*%d\n", b, expo, a, c, sol_pos, a);
        printf("     -(%d)-√%d-4*%d*%d\nx2 = ---------------- = %d\n          2*%d\n", b, expo, a, c, sol_neg, a);
    }
    if ( ((-b+sqrot)%(2*a)!=0) && ((-b-sqrot)%(2*a)!=0) )
    {
        printf("     -(%d)+√%d-4*%d*%d\nx1 = ---------------- = %d/%d\n          2*%d\n", b, expo, a, c, (-b+sqrot), (2*a), a);
        printf("     -(%d)-√%d-4*%d*%d\nx2 = ---------------- = %d/%d\n          2*%d\n", b, expo, a, c, (-b-sqrot), (2*a), a);
    }
    if ( ((-b+sqrot)%(2*a)==0) && ((-b-sqrot)%(2*a)!=0) )
    {
        printf("     -(%d)+√%d-4*%d*%d\nx1 = ---------------- = %d\n          2*%d\n", b, expo, a, c, sol_pos, a);
        printf("     -(%d)-√%d-4*%d*%d\nx2 = ---------------- = %d/%d\n          2*%d\n", b, expo, a, c, (-b-sqrot), (2*a), a);
    }
    if ( ((-b+sqrot)%(2*a)!=0) && ((-b-sqrot)%(2*a)==0) )
    {
        printf("     -(%d)+√%d-4*%d*%d\nx1 = ---------------- = %d/%d\n          2*%d\n", b, expo, a, c, (-b+sqrot), (2*a), a);
        printf("     -(%d)-√%d-4*%d*%d\nx2 = ---------------- = %d\n          2*%d\n", b, expo, a, c, sol_neg, a);
    }
    
    return 0;
}