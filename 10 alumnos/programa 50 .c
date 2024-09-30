#include<stdio.h>
#include<conio.h>

int main()
{
    int f,age,morning=0,afternoon=0,nigth=0,averageMorn,averageAft,averageNig;
    printf("Morning shift students");
    printf("\n");
    for(f=1;f<=5;f++)
    {
        printf("Age of the student: ");
        scanf("%i",&age);
        morning=age+morning;
    }
    printf("\n");
    printf("Afternoon shift students");
    printf("\n");
    for(f=1;f<=6;f++)
    {
        printf("Age of the student: ");
        scanf("%i",&age);
        afternoon=age+afternoon;
    }
    printf("\n");
    printf("Nigth shift students");
    printf("\n");
    for(f=1;f<=11;f++)
    {
        printf("Age of the student: ");
        scanf("%i",&age);
        nigth=age+nigth;
    }
    averageMorn=morning/5;
    averageAft=afternoon/6;
    averageNig=nigth/11;
    printf("\n");
    printf("Average age in the morning shift: ");
    printf("%i",averageMorn);
    printf("\n");
    printf("Average age in the afternoon shift: ");
    printf("%i",averageAft);
    printf("\n");
    printf("Average age of the nigth shift: ");
    printf("%i",averageNig);
    printf("\n");
    if(averageMorn<averageAft && averageMorn<averageNig)
    {
        printf("\n");
        printf("The morning shift has the lowest average age");
    }
    else
    {
        if(averageAft<averageNig)
        {
            printf("\n");
            printf("The afternoon shift has the lowest average age");
        }
        else
        {
            printf("\n");
        printf("The nigth shift has the lowest average age");
        }
    }
    getch();
    return 0;
}
