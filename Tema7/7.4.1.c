//Crear una función que calcule el cubo de un número real (float). El resultado deberá ser otro número real. Probar esta función para calcular el cubo de 3.2 y el de 5.
#include <stdio.h>

calculate()
{
    float number1 = 3.2*3.2*3.2;
    float number2 = 5*5*5;
    
    printf("3.2^3 = %.3f\n", number1);
    printf("5^3 = %.2f\n", number2);
    
    return 0;
}

int main()
{
    calculate();
    return 0;
}
