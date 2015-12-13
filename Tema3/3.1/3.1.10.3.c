//Repetir los dos programas anteriores, empleando "if" en lugar de "switch".
#include <stdio.h>
int main()
{
    char letra;
    
    printf("Teclea una letra: \n");
    scanf("%c", &letra);
    
    if ((letra=='x') || (letra=='y') || (letra=='z'))  printf("%c es una cifra numerica\n", letra);
    if ((letra==',') || (letra=='.') || (letra==':') || (letra==';'))  printf("%c es un signo de puntuacion\n", letra);
    if ((letra=='a') || (letra=='e') || (letra=='i') || (letra=='o') || (letra=='u'))  printf("%c es un vocal\n", letra);
      else printf("%c es un consonante\n", letra);
      
    return 0;
}    