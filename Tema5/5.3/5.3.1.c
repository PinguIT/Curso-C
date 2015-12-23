//Un programa guarde los nombres de los meses. El usuario deberá indicar un número de mes (por ejemplo, 3) y se le mostrará el nombre de dicho mes (por ejemplo, Marzo).
#include <stdio.h>
#include <string.h>
int main()
{
    char months[12][80]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int number;
    
    printf("Input month:\n");
    scanf("%d", &number);
    printf("%s", months[number-1]);
    
    return 0;
}