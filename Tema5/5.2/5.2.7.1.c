//Un programa que pida tu nombre, tu día de nacimiento y tu mes de nacimiento y lo junte todo en una cadena, separando el nombre de la fecha por una coma
//y el día del mes por una barra inclinada, así: "Juan, nacido el 31/12".
#include <stdio.h>
#include <string.h>
int main()
{
    char name[40], full[40], name_add[40], day_add[40], month_add[40];
    int day, month;
    
    printf("Input name:\n");
    scanf("%s", name);
    sprintf(name_add,"%s, born ",name);
    printf("Input day of birth:\n");
    scanf("%d", &day);
    sprintf(day_add,"%d/", day);
    printf("Input month of birth:\n");
    scanf("%d", &month);
    sprintf(month_add,"%d", month);
    strcat(full, name_add);
    strcat(full, day_add);
    strcat(full, month_add);
    printf("%s", full);
    
    return 0;
}
