#include<stdio.h>
#include<conio.h>
#define TAMANO 5

void load(int *pe)
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("Enter element: ");
        scanf("%i",&*pe);
        pe++;
    }
}

void print(int *pe)
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("%i ",*pe);
        pe++;
    }
}

int main()
{
    int vec[TAMANO];
    load(vec);
    print(vec);
    getch();
    return 0;
}
