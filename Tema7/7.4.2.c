//Crear una función que calcule cual es el menor de dos números enteros. El resultado será otro número entero.
#include <stdio.h>

int lowest(int number1, int number2)
{
    int lowest;
    
    
    if (number1<number2)  lowest=number1;
    if (number2<number1)  lowest=number2;
    
    
    
    return lowest;
}
int main()
{
    int number1, number2;
    
    printf("Input number:\n");
    scanf("%d", &number1);
    printf("Input number:\n");
    scanf("%d", &number2);
    
    printf("%d",lowest(number1,number2));
    
    return 0;
}