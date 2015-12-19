//Crear una función "pedirEntero", que reciba como parámetros el texto que se debe mostrar en pantalla, el valor mínimo aceptable y el valor máximo aceptable. Deberá pedir
//al usuario que introduzca el valor tantas veces como sea necesario, volvérselo a pedir en caso de error, y devolver un valor correcto. Probarlo con un programa que pida al usuario
//un año entre 1800 y 2100.

#include <stdio.h>

void asknum(char no[80], char yes[80], int min, int max)
{
    int year;
    do
    {
        printf("Input number between 1800 and 2000:\n");
        scanf("%d", &year);
        if ((year<min) || (year>max))  printf("%s\n", no);
        else printf("%s", yes);
    }
    while ((year<min) || (year>max));
    
}

int main()
{
    
    int min = 1800;
    int max = 2000;
    char wrong[] = "Error";
    char correct[] = "Correct";
    
    asknum(wrong, correct, min, max);
    
    return 0;
}