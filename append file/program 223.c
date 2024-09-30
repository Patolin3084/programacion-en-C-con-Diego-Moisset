#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int create()
{
    FILE *arch;
    arch=fopen("archivo3.dat","wb");
    if(arch==NULL)
        exit(1);
    int v1=10,v2=20,v3=30;
    fwrite(&v1,sizeof(int),1,arch);
    fwrite(&v2,sizeof(int),1,arch);
    fwrite(&v3,sizeof(int),1,arch);
    fclose(arch);
}

void load()
{
    FILE *arch;
    arch=fopen("archivo3.dat","ab");
    if(arch==NULL)
        exit(1);
    float v4=4.44;
    fwrite(&v4,sizeof(float),1,arch);
    fclose(arch);
}

void print()
{
    FILE *arch;
    arch=fopen("archivo3.dat","rb");
    if(arch==NULL)
        exit(1);
    int v1,v2,v3;
    float v4;
    fread(&v1,sizeof(int),1,arch);
    printf("First integer: %i\n",v1);
    fread(&v2,sizeof(int),1,arch);
    printf("Second integer: %i\n",v2);
    fread(&v3,sizeof(int),1,arch);
    printf("Third integer: %i\n",v3);
    fread(&v4,sizeof(float),1,arch);
    printf("First float: %0.2f",v4);
    fclose(arch);
}

int main()
{
    create();
    load();
    print();
    getch();
    return 0;
}
