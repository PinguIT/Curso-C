//Crear una función "dibujarRectangulo", que reciba como parámetros la anchura y la altura del rectángulo a mostrar, y muestre en pantalla
//un rectángulo de ese tamaño, relleno de caracteres "#"
#include <stdio.h>

void draw(int x, int y)
{
    int i, j;
    
   for(i=0; i<y; i++)
   {
       for(j=0; j<x; j++)
       {
           printf("#");
       }
    printf("\n");
   }
}

int main()
{
    int b, h;
    
    printf("Input base:\n");
    scanf("%d", &b);
    printf("Input height:\n");
    scanf("%d", &h);
    
    draw(b, h);
    
    return 0;
}