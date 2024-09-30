#include<stdio.h>
#include<conio.h>

int main()
{
    int f, nota, aprobados, reprobados;
    aprobados=0;
    reprobados=0;
    for(f=1; f<=10; f++)
    {
        printf("Ingresar nota:");
        scanf("%i",&nota);
        if(nota>=7)
        {
            aprobados++;
        }
        else
        {
            reprobados++;
        }
    }
    printf("Cantidad de aprobados:");
    printf("%i",aprobados);
    printf("\n");
    printf("Cantidad de reprobados:");
    printf("%i",reprobados);
    getch();
    return 0;
}
