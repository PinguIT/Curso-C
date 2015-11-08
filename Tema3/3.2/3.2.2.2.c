//Crea un programa que escriba en pantalla los números del 1 al 10, usando "do..while"
#include <stdio.h>

int main()
{
    int x;
    int y;
    
    y = 1;
    do
    {
        x = y++;
        printf("%d\n", x);
    }
    while (x!=10);
    
    return 0;
    
}