//Crear un programa que resuelva ecuaciones de segundo grado, del tipo ax2 + bx + c = 0 El usuario deberá introducir los valores de a, b y c.
//Pista: la solución se calcula con x = -b+- raíz de (b2 – 4·a·c)  / 2·a           

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, x, y, j, i, z, res1, res2;
    
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
    res1 = (-b+z)/i;
    res2 = (-b-z)/i;
    
    if (((-b+z)%i!=0) && ((-b-z)%i==0)) //no/si
    {
        printf("First result = %d/%d\nSecond result = %d\n", -b+z, i, res2);
    }
    if (((-b+z)%i==0) && ((-b-z)%i!=0))  //si/no
    {
        printf("First result = %d\nSecond result = %d/%d\n", res1, -b-z, i);
    }
    if (((-b+z)%i!=0) && ((-b-z)%i!=0)) //no/no
    {
        printf("First result = %d/%d\nSecond result = %d/%d\n", -b+z, i, -b-z, i);
    }
    if (((-b+z)%i==0) && ((-b-z)%i==0)) //si/si
    {
        printf("First result = %d\nSecond result = %d\n", res1, res2);
    }
    return 0;
}