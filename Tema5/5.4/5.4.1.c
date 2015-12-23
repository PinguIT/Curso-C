//Un programa que pida 10 nombres y los memorice. Después deberá pedir que se teclee un nombre y dirá si se encuentra o no entre los 10 que se han tecleado antes.
//Volverá a pedir otro nombre y a decir si se encuentra entre ellos, y así sucesivamente hasta que se teclee "fin"
#include <stdio.h>
#include <string.h>
int main()
{
    char names[10][80], name_comp[80];
    int i;
    int found;


    for (i=0;i<10;i++)
    {
        printf("Input a name:\n");
        scanf("%s", names[i]);
    }
    
    do
    {
        printf("Find a name:\n");
        scanf("%s", name_comp);
        
        if (strcmp(name_comp, "exit") == 0) 
            break;
            
        found = 0;
        for (i=0; i<10; i++)
        {
           if (strcmp(name_comp, names[i])==0)  found = 1;
        } 
        
        if (found)   printf("Name found\n"); 
        else   printf("Name not found\n");  
        
    } while(1);
    
    
    return 0;
}