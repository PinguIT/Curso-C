//A partir del programa propuesto en 5.1.2, que almacenaba en una tabla el número de días que tiene cada mes, crear otro que pida al usuario que le indique la fecha, 
//detallando el día (1 al 31) y el mes (1=enero, 12=diciembre), como respuesta muestre en pantalla el número de días que quedan hasta final de año.
#include <stdio.h>
int main()
{
    int days[12] =
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    int day;
    int i;
    int day_of_year = 0;
    
    printf("Input a day of the month: \n");
    scanf("%d", &day);
    printf("Input a month: \n");
    scanf("%d", &month);
    
    for (i=1; i < month; i++) 
    {
        day_of_year += days[i-1];
    }
    day_of_year = day_of_year + day;
 
    printf("Days left in year: %d\n", 365-day_of_year);
    
    return 0;
}