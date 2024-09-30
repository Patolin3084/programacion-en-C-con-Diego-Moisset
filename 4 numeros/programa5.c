#include<stdio.h>

int main()
{
    int num1, num2, num3, num4;
    int suma, producto;
    printf("Ingrese el primer valor:");
    scanf("%i",&num1);
    printf("Ingrese el segundo valor:");
    scanf("%i",&num2);
    printf("Ingrese el tercer valor:");
    scanf("%i",&num3);
    printf("Ingrese el cuarto valor:");
    scanf("%i",&num4);
    suma=num1+num2;
    producto=num3+num4;
    printf("El resultado de la suma del primer y segundo valor es:");
    printf("%i",suma);
    printf("\n");
    printf("El resultado del producto del tercer y cuarto valor es:");
    printf("%i",producto);
    getch();
    return 0;
}
