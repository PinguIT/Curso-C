//Crear un programa que emplee recursividad para calcular un número de la serie Fibonacci (en la que los dos primeros elementos valen 1, y para los restantes, cada elemento es la suma de los dos anteriores).

#include <stdio.h>
int func(int n)
{
    if (n==1  || n==2)  return 1;
    else  return func(n-1) + func(n-2);
}
int main()
{
    int num;
    
    do
    {
        printf("Input number:\n");
        scanf("%d", &num);
        printf("%d\n", func(num));
    }
    while(num!=0);
    
    
    return 0;
}