//Crear una función "escribirTablaMultiplicar", que reciba como parámetro un número entero, y escriba la tabla de multiplicar de ese número (por ejemplo, para el 3 deberá llegar desde 3x0=0 hasta 3x10=30).

#include <stdio.h>

void multable(int num)
{
    int i;
    
    for(i=0; i<=10; i++)
    {
        printf("%dx%d=%d\n", num, i, num*i);
    }
}

int main()
{
    int num;
    
    printf("Input number:\n");
    scanf("%d", &num);
    
    multable(num);
    
    return 0;
}