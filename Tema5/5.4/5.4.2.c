//Un programa que prepare espacio para un máximo de 100 nombres (de un máximo de 80 letras cada uno). El usuario deberá ir introduciendo un nombre cada vez,
//hasta que se pulse Intro sin teclear nada, momento en el que dejarán de pedirse más nombres y se mostrará en pantalla la lista de los nombres
//que se han introducido hasta entonces.

// Starting from what you have NOW, modify it so that it prints how many strings you typed in.
#include <stdio.h>
#include <string.h>
int main()
{
    char names[100][80];
    int i = 0;
    int j = 0;
    
    do
    {
        printf("Input name:\n");
        gets(names[i]);
        i++;
    } 
    while ((strcmp(names[i-1], "") != 0) && (i<100));
    
  //  printf("%d\n", i-1);
    
    for (j=0; j<i-1; j++)
    {
      printf("%s  ", names[j]);
    }
    
    
    return 0;
    
}