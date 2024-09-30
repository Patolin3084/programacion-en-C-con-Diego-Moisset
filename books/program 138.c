#include<stdio.h>
#include<conio.h>
#include<string.h>

#define TAMANO 4

struct book{
    int code;
    char title[40];
    char author[40];
};

void load(struct book vec[TAMANO])
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("Enter the books code: ");
        scanf("%i",&vec[r].code);
        fflush(stdin);
        printf("Enter the books title: ");
        gets(vec[r].title);
        printf("Enter the books author: ");
        gets(vec[r].author);
    }
}

void print(struct book vec[TAMANO])
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("%i  %s  %s\n",vec[r].code,vec[r].title,vec[r].author);
    }
}

void searchAuthor(struct book vec[TAMANO])
{
    char aut[40];
    printf("Enter the authors name for search: ");
    gets(aut);
    int cant=0;
    for(int r=0;r<TAMANO;r++)
    {
        if(strcmp(aut,vec[r].author)==0)
        {
            printf("Title: %s\n",vec[r].title);
            cant++;
        }
    }
    if(cant==0)
    {
        printf("There are no titles by this author.");
    }
}

int main()
{
    struct book vector[TAMANO];
    load(vector);
    print(vector);
    searchAuthor(vector);
    getch();
    return 0;
}
