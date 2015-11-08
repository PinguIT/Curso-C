//codigo es 1024 pass 4567
#include <stdio.h>
int main()
{
    int codigo;
    int pass;
    
    do
    {
        printf("Input code: \n");
        scanf("%d", &codigo);
        printf("Input pass: \n");
        scanf("%d", &pass);
        if ((codigo!=1024) || (pass!=4567))  printf("Wrong code or pass \n");
    }
    while ((codigo!=1024) || (pass!=4567));
     printf("Access granted");
    
    return 0;
}