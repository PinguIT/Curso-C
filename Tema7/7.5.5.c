//Crear una función "escribirCentrado" que reciba un texto y lo escriba
//centrado en la siguiente línea de pantalla (suponiendo 80 columnas en pantalla).

#include <stdio.h>
#include <string.h>

void writecentre(char txt[80])
{
    int i;
    int word = strlen(txt)/2;
    int amount = 40 - word;
    
    for(i=0; i<amount; i++)
    {
        printf(" ");
    }
    printf("%s", txt);
}

int main()
{
    char text[80];
    
    printf("Input text:\n");
    scanf("%s", text);
    
    writecentre(text);
    
    return 0;
}