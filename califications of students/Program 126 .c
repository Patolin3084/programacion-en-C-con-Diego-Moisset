#include<stdio.h>
#include<conio.h>

void load(char name[4][31],int grade[4])
{
    for(int r=0;r<4;r++)
    {
        printf("Enter the student name: ");
        gets(name[r]);
        printf("Enter the student grade: ");
        scanf("%i",&grade[r]);
        fflush(stdin);
    }
}

void printCondition(char name[4][31],int grade[4])
{
    for(int r=0;r<4;r++)
    {
        printf("%s - %i",name[r],grade[r]);
        if(grade[r]>=8)
        {
            printf("'Muy Bueno'\n");
        }
        else
        {
            if(grade[r]>4)
            {
                printf("'Bueno'.\n");
            }
            else
            {
                printf("'Insuficiente'.\n");
            }
        }
    }
}

void counterMuyBuenos(int grade[4])
{
    int counter=0;
    for(int r=0;r<4;r++)
        if(grade[r]>=8)
        {
            counter++;
        }
    printf("Number of students with 'Muy Bueno': %i",counter);
}

void main()
{
    char name[4][31];
    int grade[4];
    load(name,grade);
    printCondition(name,grade);
    counterMuyBuenos(grade);
    getch();
    return 0;
}
