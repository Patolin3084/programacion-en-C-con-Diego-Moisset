#include<stdio.h>
#include<conio.h>

int main()
{
    float heigths[5],average,add=0;
    int f,tallP=0,shortP=0;
    for(f=0;f<5;f++)
    {
        printf("Enter the heigth of the person: ");
        scanf("%f",&heigths[f]);
    }
    for(f=0;f<5;f++)
    {
     add=add+heigths[f];
    }
    average=add/5;
    printf("Average heigths: ");
    printf("%0.2f",average);
    printf("\n");
    for(f=0;f<5;f++)
    {
        if(heigths[f]>average)
        {
            tallP++;
        }
        else
        {
            if(heigths[f]<average)
            {
                shortP++;
            }
        }
    }
    printf("Total number of people taller than average: ");
    printf("%i",tallP);
    printf("\n");
    printf("Total number of people shorter than average: ");
    printf("%i",shortP);
    getch();
    return 0;
}
