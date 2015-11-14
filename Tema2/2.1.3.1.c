//Crea un programa que te diga cuántos bytes son 3 megabytes.
#include <stdio.h>
int main()
{
    int bytes;
    int megabytes;
    printf("Input megabytes: \n");
    scanf("%d", &megabytes);
    
    bytes = megabytes * 1048576;
    
    printf("3 megabytes son %d bytes", bytes);
    
    return 0;
    
}