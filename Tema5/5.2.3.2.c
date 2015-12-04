//Un programa que te pida tu nombre y lo muestre en pantalla separando al revés. Por ejemplo, si tu nombre es "Juan", debería aparecer en pantalla "nauJ".
#include <stdio.h>
#include <string.h>
int main()
{
    char name [40];
    int i;
    
    printf("Input name: \n");
    scanf("%s", name);
    
    for (i = strlen(name); i >= 0; i--)
    {
        printf("%s ", );
    }
    
    return 0;
}