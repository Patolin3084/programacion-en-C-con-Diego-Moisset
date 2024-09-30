#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name1[31], name2[31], name3[31],destiny[93];
    printf("Enter the first name: ");
    gets(name1);
    printf("Enter the second name: ");
    gets(name2);
    printf("Enter the third name: ");
    gets(name3);
    if(strcmp(name1,name2)<0 && strcmp(name1,name3)<0)
    {
        strcpy(destiny,name1);
        strcat(destiny,",");
        if(strcmp(name2,name3)<0)
        {
            strcat(destiny,name2);
            strcat(destiny,",");
            strcat(destiny,name3);
        }
        else
        {
            strcat(destiny,name3);
            strcat(destiny,",");
            strcat(destiny,name2);
        }
    }
    else
    {
        if(strcmp(name2,name3)<0)
        {
            strcpy(destiny,name2);
            strcat(destiny,",");
            if(strcmp(name1,name3)<0)
            {
                strcat(destiny,name1);
                strcat(destiny,",");
                strcat(destiny,name3);
            }
            else
            {
                strcat(destiny,name3);
                strcat(destiny,",");
                strcat(destiny,name1);
            }
        }
        else
        {
            strcpy(destiny,name3);
            strcat(destiny,",");
            if(strcmp(name1,name2)<0)
            {
                strcat(destiny,name1);
                strcat(destiny,",");
                strcat(destiny,name2);
            }
            else
            {
                strcat(destiny,name2);
                strcat(destiny,",");
                strcat(destiny,name1);
            }
        }
    }
printf("The names arranged alphabetically are: \n");
printf("%s",destiny);
getch();
return 0;
}
