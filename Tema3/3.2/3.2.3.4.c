#include <stdio.h>
int main()
{
    int numero;
    int tabla = 6;
    
    for (numero=1; numero<=10; numero++)
       printf("%d * %d: %d\n", tabla, numero, tabla*numero);
    
    return 0;
}