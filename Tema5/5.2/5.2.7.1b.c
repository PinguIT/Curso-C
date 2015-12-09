//Un programa que pida tu nombre, tu día de nacimiento y tu mes de nacimiento y lo junte todo en una cadena, separando el nombre de la fecha por una coma
//y el día del mes por una barra inclinada, así: "Juan, nacido el 31/12".
#include <stdio.h>
#include <string.h>
int main()
{
    char name[40], full[40];
    int day, month;
    
    printf("Input name:\n");
    scanf("%s", name);
    printf("Input day of birth:\n");
    scanf("%d", &day);
    printf("Input month of birth:\n");
    scanf("%d", &month);
    
    sprintf(full, "%s, born %d/%d", name, day, month);
    printf("%s", full);
    
    return 0;
}
