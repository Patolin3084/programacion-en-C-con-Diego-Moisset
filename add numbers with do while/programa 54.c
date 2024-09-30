#include<stdio.h>
#include<conio.h>

int main()
{
    int value,add;
    do{
        printf("Enter a value positive or negative less that 9998 (9999 ends): ");
        scanf("%i",&value);
        if(value<9999)
        {
            add=value+add;
        }
    }while(value!=9999);
    printf("The result of the addision of values is: ");
    printf("%i",add);
    printf("\n");
    if(add<0)
    {
        printf("The addission of values is LESS than 0(zero)");
    }
    else
    {
        if(add>0)
        {
            printf("The addision of values is GREATER than 0(zero)");
        }
        else
        {
            printf("The addision of values is EQUAL than 0(zero)");
        }
    }
    getch();
    return 0;
}
