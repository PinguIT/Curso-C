//¿Cuál sería el resultado de las siguientes operaciones? a=5; b=a+2; b-=3; c=-3; c*=2; ++c; a*=b;

#include <stdio.h>
int main()
{
    int a, b, c;
    a=5;
    b=a+2;
    b-=3;
    c=-3;
    c*=2;
    ++c;
    a*=b;
    
    printf("a = %d\nb = %d\nc = %d\n", a , b , c);
    
    return 0;
    
}