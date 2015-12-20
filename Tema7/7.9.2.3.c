//Crear un programa que muestre el seno de los ángulos de 30 grados, 45 grados, 60 grados y 90 grados. Cuidado: la función "sin" espera que se le indique
//el ángulo en radianes, no en grados. Tendrás que recordar que 180 grados es lo mismo que Pi radianes (con Pi = 3,1415926535). Puedes crearte una función
//auxiliar que convierta de grados a radianes.     sin(x)       180--3.1415926535   30--x
#include <stdio.h>
#include <math.h>
int main()
{
    float x = 3.1415926535*30/180;
    float y = 3.1415926535*45/180;
    float z = 3.1415926535*60/180;
    float i = 3.1415926535*90/180;
    
    printf("%.4f, %.4f, %.4f, %.4f\n", sin(x), sin(y), sin(z), sin(i));
    
    return 0;
}