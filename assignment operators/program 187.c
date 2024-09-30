#include<stdio.h>
#include<conio.h>

#define AMOUNT 5

void load(int vec[AMOUNT])
{
    for(int r=0;r<AMOUNT;r++)
    {
        printf("Enter elements:");
        scanf("%i",&vec[r]);
    }
}

int returnAdd(int vec[AMOUNT])
{
    int add=0;
    for(int r=0;r<AMOUNT;r++)
        add+=vec[r];
    return add;
}

int returnProduct(int vec[AMOUNT])
{
    int prod=1;
    for(int r=0;r<AMOUNT;r++)
        prod*=vec[r];
    return prod;
}

int main()
{
    int vec[AMOUNT];
    load(vec);
    printf("The add of its components: %i\n",returnAdd(vec));
    printf("The multiplication of its components: %i\n",returnProduct(vec));
    getch();
    return 0;
}
