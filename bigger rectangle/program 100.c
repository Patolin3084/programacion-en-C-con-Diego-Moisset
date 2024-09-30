#include<stdio.h>
#include<conio.h>

int returnSurface(int side1,int side2)
{
    return side1*side2;
}

int main()
{
    int value1,value2,value3,value4;
    printf("Enter the value of the largest side of the rectangle: ");
    scanf("%i",&value1);
    printf("Enter the value of the smallest side of the rectangle: ");
    scanf("%i",&value2);
    printf("The surface area of a %i by %i rectangle is %i\n",value1,value2,returnSurface(value1,value2));
    printf("--------------------------------------------------------\n");
    printf("Enter the value of the largest side of the rectangle: ");
    scanf("%i",&value3);
    printf("Enter the value of the smallest side of the rectangle: ");
    scanf("%i",&value4);
    printf("The surface area of a %i by %i rectangle is %i\n",value1,value2,returnSurface(value3,value4));
    printf("--------------------------------------------------------\n");
    if(returnSurface(value1,value2)>returnSurface(value3,value4))
    {
        printf("The bigger rectangle is the first");
    }
    else
    {
        if(returnSurface(value1,value2)<returnSurface(value3,value4))
        {
            printf("The bigger rectangle is the second");
        }
        else
        {
            printf("Both rectangle are the same");
        }
    }
    getch();
    return 0;
}
