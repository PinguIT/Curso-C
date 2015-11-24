//Un programa que almacene en una tabla el número de días que tiene cada mes (año no bisiesto), pida al usuario que le indique un mes (ej. 2 para febrero)
//y un día (ej. el día 15) y diga qué número de día es dentro del año (por ejemplo, el 15 de febrero sería el día número 46, el 31 de diciembre sería el día 365).
#include <stdio.h>
int main()
{
    int days[12] =
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    int day;
    int i;
    int day_of_year = 0;
    
    printf("Pick a month: \n");
    scanf("%d", &month);
    printf("Pick a day of the month: \n");
    scanf("%d", &day);

    for (i=1; i < month; i++)
    {
        // day_of_year = day_of_year + number[i-1];
        day_of_year += days[i-1];
    }
    day_of_year = day_of_year + day;

    printf("Day of the year: %d", day_of_year);
    
    
    return 0;
}