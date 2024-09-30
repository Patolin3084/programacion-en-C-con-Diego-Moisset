 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int xA, xB;
     float listaA, listaB, valor;
     xA=1;
     xB=1;
     listaA=0;
     listaB=0;
     while(xA<=15)
     {
         printf("Ingresar valor para lista A:");
         scanf("%f",&valor);
         listaA=listaA+valor;
         xA=xA+1;
     }
     printf("\n");
     while(xB<=15)
     {
         printf("Ingresar valor para lista B:");
         scanf("%f",&valor);
         listaB=listaB+valor;
         xB=xB+1;
     }
     if(listaA>listaB)
     {
         printf("La lista A es mayor");
     }
     else
     {
         if(listaB>listaA)
        {
            printf("La lista B es Mayor");
        }
          else
        {
            printf("Las listas A y B son iguales");
        }
    }
     getch();
     return 0;
 }
