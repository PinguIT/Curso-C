//¿Cuál sería el resultado de las siguientes operaciones? a=5; b=++a; c=a++; b=b*5; a=a*2;

#include <stdio.h>
int main()
{
    int a, b, c;
    a = 5;
    b = ++a;
    c = a++;
    b = b * 5;
    a = a * 2;
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    
    return 0;

}