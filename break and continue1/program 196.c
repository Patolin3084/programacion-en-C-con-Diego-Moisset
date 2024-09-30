#include<stdio.h>
#include<conio.h>

int main()
{
    int value;
    int add=0;
    while(1)
    {
        printf("Enter a value or 0(zero) to finish: ");
        scanf("%i",&value);
        if(value==0)
            break;
        add+=value;
    }
    printf("The addition of the values entered is: %i",add);
    getch();
    return 0;
}
