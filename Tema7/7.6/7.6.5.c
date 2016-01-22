//Crear una función que reciba un número cualquiera y que devuelva como resultado la suma de sus dígitos. Por ejemplo, si el número fuera 123 la suma sería 6.

#include <stdio.h>

int func(int num)
{
    int i=0, count=0, n=1, aux;
    aux=num;
    do
    {
        aux=aux/10;
        count++;
    } while(aux>0);
    
    for(i=0;i<count;i++)
    {
        
    }
    
    return n;
}

int main()
{
    int n;
    
    printf("Input number:\n");
    scanf("%d", &n);
    
    func(n);
    
    printf("%d", func(n));
    
    return 0;
    
}