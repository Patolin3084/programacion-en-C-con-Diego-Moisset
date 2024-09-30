#include<stdio.h>
#include<conio.h>

int main()
{
    int valor;
    printf("Ingrese un valor de 1 a 99:");
    scanf("%i", &valor);
    if (valor>=10)
    {
        printf("Tiene 2 digitos");
    }
    else
    {
        printf("Tiene 1 digito:");
    }
    getch();
    return (0);
}
