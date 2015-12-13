//Crear una función que calcule cual es el menor de dos números enteros. El resultado será otro número entero.
#include <stdio.h>

lowest()
{
    if (number1<number2)  lowest=number1;
    if (number2<number1)  lowest=number2;
    
    printf("Lowest: %d", lowest);
    
    return 0;
}

int main()
{
    int number1, number2, lowest;
    
    printf("Input number:\n");
    scanf("%d", &number1);
    printf("Input number:\n");
    scanf("%d", &number2);
    
    lowest();
    return 0;
}