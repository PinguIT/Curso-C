//Crear un programa que resuelva ecuaciones de segundo grado, del tipo ax2 + bx + c = 0 El usuario deberá introducir los valores de a, b y c.
// cd Tema7/   gcc -o 7.9.2.2 7.9.2.2.c -lm     ./7.9.2.2

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
        else if ((z%2!=0) && (z%3!=0) && (z%5!=0) && (z%7!=0))
        {
            printf("No solution. Square root is not exact.\n");
        }
        else  printf("First solution = %d/%d  \nSecond solution = %d\n", -b+z, i, sol2);
    }
    if (((-b+z)%i==0) && ((-b-z)%i!=0))  
    {
        if (z/1<0)  printf("No solution. Square root is negative number.\n");
        else if ((z%2!=0) && (z%3!=0) && (z%5!=0) && (z%7!=0))
        {
            printf("No solution. Square root is not exact.\n");
        }
        else  printf("First solution = %d  \nSecond solution = %d/%d\n", sol1, -b-z, i);
    }
    if (((-b+z)%i!=0) && ((-b-z)%i!=0))
    {
        if (z/1<0)  printf("No solution. Square root is negative number.\n");
        else if ((z%2!=0) && (z%3!=0) && (z%5!=0) && (z%7!=0))
        {
            printf("No solution. Square root is not exact.\n");
        }
        else  printf("First solution = %d/%d  \nSecond solution = %d/%d\n", -b+z, i, -b-z, i);
    }
    if (((-b+z)%i==0) && ((-b-z)%i==0)) 
    {
        if (z/1<0)  printf("No solution. Square root is negative number.\n");
        else if ((z%2!=0) && (z%3!=0) && (z%5!=0) && (z%7!=0))
        {
            printf("No solution. Square root is not exact.\n");
        }
        else  printf("First solution = %d  \nSecond solution = %d\n", sol1, sol2);
    }
    return 0;
}