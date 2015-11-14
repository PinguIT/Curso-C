//Crear un programa que pida al usuario que teclee cuatro letras y las muestre en pantalla juntas, pero en orden inverso, y entre comillas dobles

#include <stdio.h>
int main()
{
    char letra, letra2, letra3, letra4;
    
    printf("Teclea cuatro letras: \n");
    scanf("%c %c %c %c", &letra, &letra2, &letra3, &letra4);
    printf("\"%c%c%c%c\"", letra4 , letra3 , letra2 , letra);
    
    return 0;
    
}