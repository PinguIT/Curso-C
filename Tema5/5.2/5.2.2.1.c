//Un programa que pida al usuario que introduzca una palabra, cambie su primera letra por una "A" y muestre la palabra resultante.
#include <stdio.h>
int main()
{
    char word[40];
    
    printf("Input word: \n");
    scanf("%s", word);
    
    word[0] = 'A';
    
    printf("Modified word: %s", word);
    
    return 0;
}