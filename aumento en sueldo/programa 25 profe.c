#include<stdio.h>
#include<conio.h>

int main()
{
    float sueldo;
    int antiguedad;
    printf("Ingrese monto del sueldo:");
    scanf("%f", &sueldo);
    printf("Ingrese años de antiguedad:");
    scanf("%i", &antiguedad);
    if (sueldo<500 && antiguedad>=10)
    {
        float aumento=sueldo*0.20;
        float sueldoPag=sueldo+aumento;
        printf("El sueldo con 20 por ciento de aumento es:");
        printf("%f", sueldoPag);
    }
    else
    {
        if (sueldo<500)
        {
            float aumento=sueldo*0.05;
            float sueldoPag=sueldo+aumento;
            printf("El sueldo con 5 por ciento de aumento es:");
            printf("%f", sueldoPag);
        }
        else
        {
            printf("%f", sueldo);
        }
    }
    getch();
    return 0;
}

