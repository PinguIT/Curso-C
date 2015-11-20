//Un programa que almacene en una tabla el número de días que tiene cada mes (supondremos que es un año no bisiesto), 
//pida al usuario que le indique un mes (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.
#include <stdio.h>
int main()
{
    int dias[12] =
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    
    printf("Pick a month: \n");
    scanf("%d", &month);
    
    printf("El mes %d tiene %d dias", month, dias[month-1]);
    

    return 0;
    
}