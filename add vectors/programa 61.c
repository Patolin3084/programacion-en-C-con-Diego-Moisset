#include<stdio.h>
#include<conio.h>

int main()
{
    int f,vector1[4],vector2[4],add[4];
    printf("Vector1 \n");
    for(f=0;f<4;f++)
    {
        printf("Enter a value for Vector1: ");
        scanf("%i",&vector1[f]);
    }
    printf("\nVector2\n");
    for(f=0;f<4;f++)
    {
        printf("Enter a value for Vector2: ");
        scanf("%i",&vector2[f]);
    }
    for(f=0;f<4;f++)
    {
        add[f]=vector1[f]+vector2[f];
    }
    printf("\nThe results of the sum of vectors is: ");
    for(f=0;f<4;f++)
    {
        printf("%i - ",add[f]);
    }
    getch();
    return 0;
}
