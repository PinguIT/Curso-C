//Crear un programa que pida al usuario dos números enteros y diga "Uno de los números es positivo", "Los dos números son positivos" o bien
//"Ninguno de los números es positivo", según corresponda.
#include<stdio.h>
int main()
{
    int numero1;
    int numero2;
    
    printf("Introduce un numero: \n");
    scanf("%d", &numero1);
    printf("Introduce otro numero: \n");
    scanf("%d", &numero2);
    
    if ((numero1>0) && (numero2>0))  printf("Los dos numeros son positivos\n");
    if ((numero1<0) && (numero2<0))  printf("Ninguno de los numeros es positivo\n");
    if ((numero1<0) && (numero2>0))  printf("Uno de los numeros es positivo");
    if ((numero1>0) && (numero2<0))  printf("Uno de los numeros es positivo");
    
}