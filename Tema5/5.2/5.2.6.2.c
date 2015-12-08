//Crear un programa que pida al usuario su nombre y su contraseña, y no le permita seguir hasta que los acierta"
#include <stdio.h>
#include <string.h>
int main()
{
    char name[]="Chloe";
    char password[]="password";
    char guess_name[40];
    char guess_pass[40];
    
    while ((strcmp(guess_name, name)!=0) || (strcmp(guess_pass, password)!=0))
    {
        printf("Input name:\n");
        scanf("%s", guess_name);
        printf("Input password:\n");
        scanf("%s", guess_pass);
        if ((strcmp(guess_name, name)!=0) || (strcmp(guess_pass, password)!=0))   printf("Access denied.\n"); 
    }
    
    printf("Access granted.\n");
    
    return 0;
    
}