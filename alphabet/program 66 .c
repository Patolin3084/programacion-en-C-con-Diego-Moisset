#include<stdio.h>
#include<conio.h>

int main()
{
    char letter;
    for(letter=65;letter<='Z';letter++)
    {
        printf("%c ",letter);
    }
    printf("\n\n");
    for(letter=97;letter<='z';letter++)
    {
        printf("%c ",letter);
    }
    getch();
    return 0;
}
