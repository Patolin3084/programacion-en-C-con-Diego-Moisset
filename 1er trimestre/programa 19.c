#include<stdio.h>
#include<conio.h>

int main()
{
    int dd, mm, aa;
    printf("Ingrese dia:");
    scanf("%i", &dd);
    printf("Ingrese mes:");
    scanf("%i", &mm);
    printf("Ingrese año:");
    scanf("%i", &aa);
    if(mm==01||mm==02||mm==03)
    {
        printf("Corresponde al primer trimestre");
    }
    getch();
    return 0;
}
