#include<stdio.h>
#include<conio.h>

int main()
{
    float sueldo, sueldo1, sueldo2;
    int antiguedad, aumento1, aumento2;
    printf("Ingrese monto del sueldo:");
    scanf("%f", &sueldo);
    printf("Ingrese años de antiguedad:");
    scanf("%i", &antiguedad);
    if (sueldo<500 && antiguedad>=10)
    {
        aumento1=sueldo*0.20;
        sueldo1=sueldo+aumento1;
        printf("El sueldo con 20 por ciento de aumento es:");
        printf("%f", sueldo1);
    }
    else
    {
        if (sueldo<500)
        {
            aumento2=sueldo*0.05;
            sueldo2=sueldo+aumento2;
            printf("El sueldo con 5 por ciento de aumento es:");
            printf("%f", sueldo2);
        }
        else
        {
            printf("%f", sueldo);
        }
    }
    getch();
    return 0;
}
