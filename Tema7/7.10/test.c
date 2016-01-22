#include <stdio.h>

long fact(int n)
{
    if (n==1) /* Aseguramos que termine */ 
       return 1; 
    return n * fact (n-1);  /* Si no es 1, sigue la recursión */ 
} 
int main()
{
    int num;
    printf("Introduzca un número entero: ");
    scanf("%d", &num);
    printf("Su factorial es: %ld\n", fact(num)); 
    return 0;
}