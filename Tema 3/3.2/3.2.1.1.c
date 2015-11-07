#include<stdio.h>

int main()
{
    int numero;
    
    printf("Input password: \n");
    scanf("%d", &numero);
    
    while (numero!=5045)
    {
        printf("Wrong password. Please try again.\n");
        printf("Input password: \n");
        scanf("%d", &numero);
        
    }
    
    return 0;
    
}