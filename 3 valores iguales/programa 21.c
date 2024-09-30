#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, num3;
    printf("Ingrese 1er valor:");
    scanf("%i", &num1);
    printf("Ingrese 2do valor:");
    scanf("%i", &num2);
    printf("Ingrese 3er valor:");
    scanf("%i", &num3);
    if (num1==num2 && num2==num3)
    {
        int suma, producto;
        suma=num1+num2;
        printf("La suma del 1er y 2do valor es:");
        printf("%i", suma);
        printf("\n");
        producto=suma*num3;
        printf("El producto del resultado de la suma por el 3er valor es:");
        printf("%i", producto);
    }
    getch();
    return 0;
}
