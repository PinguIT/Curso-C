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
    
    if (month==1)   printf("That month has %d days\n", dias[0]);
    if (month==2)   printf("That month has %d days\n", dias[1]);
    if (month==3)   printf("That month has %d days\n", dias[2]);
    if (month==4)   printf("That month has %d days\n", dias[3]);
    if (month==5)   printf("That month has %d days\n", dias[4]);
    if (month==6)   printf("That month has %d days\n", dias[5]);
    if (month==7)   printf("That month has %d days\n", dias[6]);
    if (month==8)   printf("That month has %d days\n", dias[7]);
    if (month==9)   printf("That month has %d days\n", dias[8]);
    if (month==10)  printf("That month has %d days\n", dias[9]);
    if (month==11)  printf("That month has %d days\n", dias[10]);
    if (month==12)  printf("That month has %d days\n", dias[11]);
    if (month>12)   printf("That month does not exist"); 
    if (month<1)    printf("That month does not exist");
    
    return 0;
    
}