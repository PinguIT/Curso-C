//Un programa que prepare espacio para un máximo de 100 nombres (de un máximo de 80 letras cada uno). El usuario deberá ir introduciendo un nombre cada vez,
//hasta que se pulse Intro sin teclear nada, momento en el que dejarán de pedirse más nombres y se mostrará en pantalla la lista de los nombres
//que se han introducido hasta entonces.
#include <stdio.h>
#include <string.h>
int main()
{
    char names[100][80];
    int i;
    
    do
    {
        printf("Input name:\n");
        scanf("%s", names[i]);
        i++;
    } while (strcmp(names[i], '\n') != 0); //¿?
    
    for (i=0; i<99; i++)
    {
        if (strcmp(names[i], '\n') == 0)   printf("%s  ", names[i]);  //¿?
    }
    
    return 0;
    
}