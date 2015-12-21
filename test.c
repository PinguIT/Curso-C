
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, x, y, j, i, z, sol1, sol2;
    
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
    
    if (((-b+z)%i!=0) && ((-b-z)%i==0)) 
    {
        if (z/1<0)  printf("No solution. Square root is negative number.\n");
        else if ((z%2!=0) && (z%3!=0) && (z%5!=0) && (z%7!=0) && (z!=1))
        {
            printf("No solution. Square root is not exact.\n");
        }
        else
        {
            do
            {
                if (((-b+z)%2==0) && (i%2==0))
                {
                    printf("First solution = %d/%d  \nSecond solution = %d\n", (-b+z)/2, i/2, sol2);
                }
                if (((-b+z)%3==0) && (i%3==0))
                {
                    printf("First solution = %d/%d  \nSecond solution = %d\n", (-b+z)/3, i/3, sol2);
                }
                if (((-b+z)%5==0) && (i%5==0))
                {
                    printf("First solution = %d/%d  \nSecond solution = %d\n", (-b+z)/5, i/5, sol2);
                }
                if (((-b+z)%7==0) && (i%7==0))
                {
                    printf("First solution = %d/%d  \nSecond solution = %d\n", (-b+z)/7, i/7, sol2);
                }
            }
            while 
        }
        
    }
    if (((-b+z)%i==0) && ((-b-z)%i!=0))  
    {
        if (z/1<0)  printf("No solution. Square root is negative number.\n");
        else if ((z%2!=0) && (z%3!=0) && (z%5!=0) && (z%7!=0) && (z!=1))
        {
            printf("No solution. Square root is not exact.\n");
        }
        else
        {
            do
            {
                if (((-b-z)%2==0) && (i%2==0))
                {
                    printf("First solution = %d  \nSecond solution = %d/%d\n", sol1, (-b-z)/2, i/2);
                }
                if (((-b-z)%3==0) && (i%2==0))
                {
                    printf("First solution = %d  \nSecond solution = %d/%d\n", sol1, (-b-z)/3, i/3);
                }
                if (((-b-z)%5==0) && (i%5==0))
                {
                    printf("First solution = %d  \nSecond solution = %d/%d\n", sol1, (-b-z)/5, i/5);
                }
                if (((-b-z)%7==0) && (i%7==0))
                {
                    printf("First solution = %d  \nSecond solution = %d/%d\n", sol1, (-b-z)/7, i/7);
                }
            }
            while 
        }
    }
    if (((-b+z)%i!=0) && ((-b-z)%i!=0))
    {
        if (z/1<0)  printf("No solution. Square root is negative number.\n");
        else if ((z%2!=0) && (z%3!=0) && (z%5!=0) && (z%7!=0) && (z!=1))
        {
            printf("No solution. Square root is not exact.\n");
        }
        else
        {
            do
            {
                if (((-b+z)%2==0) && (i%2==0))
                {
                    printf("First solution = %d/%d  \n", (-b+z)/2, i/2);
                }
                if (((-b+z)%3==0) && (i%3==0))
                {
                    printf("First solution = %d/%d  \n", (-b+z)/3, i/3);
                }
                if (((-b+z)%5==0) && (i%5==0))
                {
                    printf("First solution = %d/%d  \n", (-b+z)/5, i/5);
                }
                if (((-b+z)%7==0) && (i%7==0))
                {
                    printf("First solution = %d/%d  \n", (-b+z)/7, i/7);
                }
            }
            while 
            
            do
            {
                if (((-b-z)%2==0) && (i%2==0))
                {
                    printf("Second solution = %d/%d\n", (-b-z)/2, i/2);
                }
                if (((-b-z)%3==0) && (i%2==0))
                {
                    printf("Second solution = %d/%d\n", (-b-z)/3, i/3);
                }
                if (((-b-z)%5==0) && (i%5==0))
                {
                    printf("Second solution = %d/%d\n", (-b-z)/5, i/5);
                }
                if (((-b-z)%7==0) && (i%7==0))
                {
                    printf("Second solution = %d/%d\n", (-b-z)/7, i/7);
                }
            }
            while 
        }
    }
    if (((-b+z)%i==0) && ((-b-z)%i==0)) 
    {
        if (z/1<0)  printf("No solution. Square root is negative number.\n");
        else if ((z%2!=0) && (z%3!=0) && (z%5!=0) && (z%7!=0) && (z!=1))
        {
            printf("No solution. Square root is not exact.\n");
        }
        else  printf("First solution = %d  \nSecond solution = %d\n", sol1, sol2);
    }
    return 0;
}