//Descubrir cual es el espacio ocupado por un "int" en el sistema operativo y compilador que utilizas

#include <stdio.h>
int main()
{
    
    printf("El espacio que ocupa un int en mi sistema operativo y compilador es %ld", sizeof (int));
    
    return 0;
    
}