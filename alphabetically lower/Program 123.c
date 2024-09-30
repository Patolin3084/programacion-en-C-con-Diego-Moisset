#include<stdio.h>
#include<conio.h>
#include<string.h>

void load(char names[5][41])
{
    for(int r=0;r<5;r++)
    {
        printf("Enter the name of the person: ");
        gets(names[r]);
    }
}

void print(char names[5][41])
{
    printf("Full list of names\n");
    for(int r=0;r<5;r++)
    {
        printf("%s\n",names[r]);
    }
}

void searchSmall(char names[5][41])
{
    char small[41];
    strcpy(small,names[0]);
    for(char r=1;r<5;r++)
    {
        if(strcmp(names[r],small)<0)
        {
            strcpy(small,names[r]);
        }
    }
    printf("\n'%s' is the alphabetically smaller name.",small);
}

void main()
{
    char names[5][41];
    load(names);
    print(names);
    searchSmall(names);
    getch();
    return 0;
}
