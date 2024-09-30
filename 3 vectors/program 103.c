#include<stdio.h>
#include<conio.h>

void load(int vec[5])
{
    printf("Load of  a vector\n");
    for(int x=0;x<5;x++)
    {
        printf("Load element: ");
        scanf("%i",&vec[x]);
    }
}


void generar(int vect1[5],int vect2[5],int vectAdd[5])
{
    for(int x=0;x<5;x++)
    {
        vectAdd[x]=vect1[x]+vect2[x];
    }
}


void print(int v[5])
{
    printf("Print of vector\n");
    for(int x=0;x<5;x++)
    {
        printf("%i - ",v[x]);
    }
    printf("\n");
}

int main()
{
    int vector1[5];
    int vector2[5];
    int vectAdd[5];
    load(vector1);
    load(vector2);
    generar(vector1,vector2,vectAdd);
    print(vector1);
    print(vector2);
    print(vectAdd);
    getch();
    return 0;


}
