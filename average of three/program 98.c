#include<stdio.h>
#include<conio.h>

float averageOfthree(int v1,int v2,int v3)
{
    float average;
    average=(float)(v1+v2+v3)/3;
    return average;
}

int main()
{
    int num1,num2,num3;
    printf("Enter the first number: ");
    scanf("%i",&num1);
    printf("Enter the second number: ");
    scanf("%i",&num2);
    printf("Enter the third number: ");
    scanf("%i",&num3);
    printf("The average of the three numbers is %0.2f",averageOfthree(num1,num2,num3));
    getch();
    return 0;
}
