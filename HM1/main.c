#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int total=0;

void rep_order ()
{
    printf("\n  Okay!! Nice Choice.");
    printf("\n  DO YOU WISH TO ORDER ANYTHING ELSE ? \n");

    printf("\n  ---------------------------------------------------------------------\n");
    printf("  ::::::::::::::::::::: WELCOME TO MOONBUCKS CAFE :::::::::::::::::::::\n");
    printf("  ---------------------------------------------------------------------\n");
    printf("                            :::::MENU:::::                             \n");
    printf("  ---------------------------------------------------------------------\n");
    printf("  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf(" |                                                                     |\n");
    printf(" |                    (1). COFFEE       : 70/-                         |\n");
    printf(" |                    (2). SANDWICH     : 120/-                        |\n");
    printf(" |                    (3). COLD COOFFEE : 150/-                        |\n");
    printf(" |                    (4). FRIED RICE   : 100/-                        |\n");
    printf(" |                    (5). LASAGNA      : 120/-                        |\n");
    printf(" |                                                                     |\n");
    printf(" |                         (0). BILL                                   |\n");
    printf(" |                                                                     |\n");
    printf("  ---------------------------------------------------------------------\n");

    return 0;
}


void bill()
{
        printf("  Your Final Bill is: %d \n",total);

        int cash,a;
        k:
        printf("  Received Cash: ");
        scanf("%d",&cash);


        if (cash<total)
        {
            total=total-cash ;
            printf("  Need %d more cash. \n",total);
            goto k;
        }

        else if(cash>total)
        {
            total=cash-total;
            printf("  Return Cash: %d\n",total);

            a=total/2000;
            printf("  %d notes of 2000\n",a);
            total=total-(a*2000);

            a=total/500;
            printf("  %d notes of 500\n",a);
            total=total-(a*500);

            a=total/200;
            printf("  %d notes of 200\n",a);
            total=total-(a*200);

            a=total/100;
            printf("  %d notes of 100\n",a);
            total=total-(a*100);

            a=total/50;
            printf("  %d notes of 50\n",a);
            total=total-(a*50);

            a=total/10;
            printf("  %d notes of 10\n",a);
            total=total-(a*10);

            a=total/5;
            printf("  %d notes of 5\n",a);
            total=total-(a*5);

            a=total/2;
            printf("  %d notes of 2\n",a);
            total=total-(a*2);

            a=total/1;
            printf("  %d notes of 1\n",a);
            total=total-(a*1);
        }

        else
        {
            total=cash-total;
            printf("  Return Cash: %d.",total);
        }
}

void menu_order()

{
    printf("  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ \n");
    printf("  ::::::::::::::::::::: WELCOME TO MOONBUCKS CAFE ::::::::::::::::::::: \n");
    printf("  --------------------------------------------------------------------- \n");
    printf("                            :::::MENU:::::                              \n");
    printf("  --------------------------------------------------------------------- \n");
    printf(" |                                                                     |\n");
    printf(" |                    (1). COFFEE       : 70/-                         |\n");
    printf(" |                    (2). SANDWICH     : 120/-                        |\n");
    printf(" |                    (3). COLD COOFFEE : 150/-                        |\n");
    printf(" |                    (4). FRIED RICE   : 100/-                        |\n");
    printf(" |                    (5). LASAGNA      : 120/-                        |\n");
    printf(" |                                                                     |\n");
    printf(" |                    (0). BILL                                        |\n");
    printf(" |                                                                     |\n");
    printf("  --------------------------------------------------------------------- \n");

   int choice,price;
   int plates,cups;
   int i=1;

   while(i)
    {
    printf("\n  Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){

        case 1:
        printf("  You've Ordered COFFEE\n");
        printf("  How many Cups : ");
        scanf("%d",&plates);
        price=70;
        total=total+plates*price;
        rep_order();
        break;

        case 2:
        printf("  You've Ordered SANDWICH\n");
        printf("  How many Plates : ");
        scanf("%d",&plates);
        price=120;
        total=total+plates*price;
        rep_order();
        break;

        case 3:
        printf("  You've Ordered COLD COOFFEE\n");
        printf("  How many Cups : ");
        scanf("%d",&cups);
        price=150;
        total= total+cups*price;
        rep_order();
        break;

        case 4:
        printf("  You've Ordered FRIED RICE\n");
        printf("  How many Plates : ");
        scanf("%d",&plates);
        price=100;
        total= total+plates*price;
        rep_order();
        break;

        case 5:
        printf("  You've Ordered LASAGNA\n");
        printf("  How many Plates : ");
        scanf("%d",&plates);
        price=120;
        total= total+plates*price;
        rep_order();
        break;

        case 0:
        bill();
        printf("\n  --------------------------------------------------------------------- \n");
        printf("                      (:  THANK YOU VISIT AGAIN  :)                     \n");
        printf("  --------------------------------------------------------------------- \n");


        printf("  --------------------------------------------------------------------- \n");
        printf("                    (:  PROJECT BY : AMAN MOTGHARE  :)                  \n");
        printf("  --------------------------------------------------------------------- \n");
        i=0;
        break;

        default:
        printf("\n  !!Wrong Choice!!\n");
        break;

   }
   }

}


int main()
{
    system ("color 0E");
    menu_order();
}


