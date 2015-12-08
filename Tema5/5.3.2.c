//Usar un array de 3 dimensiones para guardar los nombres de los meses en español e inglés. El usuario deberá indicar un número de mes (por ejemplo, 3)
//y se le mostrará el nombre de dicho mes en español (Marzo) y en inglés (March).
#include <stdio.h>
#include <string.h>
int main()
{
    char months_eng[12][80]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char months_spa[12][80]={"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int number;
    
    printf("Input month: ");
    scanf("%d", &number);
    printf("English: %s\n", months_eng[number-1]);
    printf("Spanish: %s\n", months_spa[number-1]);
    
    return 0;
}