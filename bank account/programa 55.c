#include<stdio.h>
#include<conio.h>

int main()
{
    float balance,add=0;
    int account;
    do{
        printf("\n");
        printf("Enter the account number (negative value to finish): ");
        scanf("%i",&account);
        if(account>0)
        {
            printf("Enter the balance account: ");
            scanf("%f",&balance);
            if(balance>0)
            {
                printf("This account has a CREDIT balance");
                printf("\n");
                add=balance+add;
            }
            else
            {
                if(balance<0)
                {
                    printf("This account has a DEBIT balance");
                    printf("\n");
                }
                else
                {
                    printf("This account has a NULL balance");
                    printf("\n");
                }

            }
        }
    }while(account>=0);
    printf("\n");
    printf("Addition of credit balances: ");
    printf("%f",add);
    getch();
    return 0;
}
