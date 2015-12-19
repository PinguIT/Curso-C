//Crear una función que reciba una cadena y una letra, y devuelva la cantidad de veces que dicha letra aparece en la cadena.

#include <stdio.h>
#include <string.h>

//int times = 0;

int func (char wrd[80], char let)
{
    int i;
    int times = 0;
    
    for (i=0; i<strlen(wrd) ; i++)
    {
        if(wrd[i]==let)  times++;
    }
    return times;
}

int main()
{
    char word[80];
    char lett;
    
    printf("Input word:\n");
    scanf("%s", word);
    getchar();      // esto se come el intro, si no el scanf siguiente no llega ni a preguntar
    printf("Input letter:\n");
    scanf("%c", &lett);
    
    func(word, lett);
    
    printf("%d times.", func(word, lett));
    
    return 0;
}