//Crear un programa que pida al usuario su contraseña. Deberá terminar cuando introduzca como contraseña la palabra "clave",
//pero volvérsela a pedir tantas veces como sea necesario.
#include <stdio.h>
#include <string.h>
int main()
{
    char password[]="password";
    char guess[40];
    
    while (strcmp(guess, password) != 0)
    {
     printf("Input password: \n");
     scanf("%s", guess);
     if (strcmp(guess, password) != 0)  printf("Access denied.\n");
    }
    
    printf("Access granted.\n");

    return 0;

}
