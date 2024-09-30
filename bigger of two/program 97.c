#include<stdio.h>
#include<conio.h>

int returnBigger(int value1,int value2)
{
    if(value1>value2)
    {
        return value1;
    }
    else
    {
        return value2;
    }
}

int main()
{
    int num1=12,num2=8;
    printf("%i",returnBigger(num1,num2));
    getch();
    return 0;
}
