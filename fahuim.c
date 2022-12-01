#include <stdio.h>
#include <windows.h>

int token = 0,tokens[50],payment_counter=0;




int main_page()
{
    int i;
    system("cls");
    system("color 0B");

    printf("\n\n\n\n\n\t      @@_@-\n\t\t    `'*'`\tWelcome\n\t\t\t\t  to\n\t\t\t  Play Bytes Restaurant \n\t\t\t\t\t\t`'*'`-@@_@\n\n");
    printf("\n\n\n\n\t\t\t    BITE THE BYTE. (^_^)\n\n                       ");
    for (i=0;i<36;i++)
     {
        printf("~");
     }
    printf("\n");
    printf("                       $                                  $\n");
    printf("                       $    Select any of them -          $\n");
    printf("                       $                                  $\n");
    printf("                       $    1. New Order.                 $\n");
    printf("                       $                                  $\n");
    printf("                       $    2. Bill Payment.              $\n");
    printf("                       $                                  $\n");
    printf("                       $    3. Exit.                      $");
    printf("\n");
    printf("                       $                                  $\n");
    printf("                       $                                  $\n");
    printf("                       ");


    for (i=0;i<36;i++)
     {
        printf("~");
     }

    char n;
    while(1)
    {
        printf("\n\n\n                         Enter Your Choice: ");
        scanf("%c",&n);
        fflush(stdin);
        if(n != '1' && n != '2' && n != '3')
        {
            printf("\n -----------------------You Entered Wrong Number------------------------\n  ------------------------Enter Correct Number------------------------\n");
            continue;
        }
        else break;
    }
    return n;
}





int menu_order()
{

    int arID[11],decision,arqty[11],Bill[11],counter=0;
    work:
    system("cls");
    system("color 4F");
    printf("\n\t\t\t\tFOOD MENU\n\t\t\t\t---------\n");

    printf("\n\tSides :\n\n");
    printf("\t1. French Fries (150gm)                .......................... 90/=\t  \n");
    printf("\t2. Chicken Fingers(5PCS)               .......................... 130/=\t  \n");

    printf("\n\tBURGERS :\n\n");
    printf("\t3. Chicken Burger                      .......................... 150/=\n\n\t(1:1 - Prepared with chicken patty & special sauce)\t\n\n");
    printf("\t4. Chicken Cheese Burger               .......................... 170/=\n\n\t(1:1 - Prepared with chicken patty, cheese & special sauce)\t\n\n");
    printf("\t5. Smocky BBQ Cheese Burger            .......................... 190/=\n\n\t(1:1 - Prepared with chicken patty, bbq sauce & cheese)\t\n\n");
    printf("\t6. Chicken with Baccon Burger          .......................... 220/=\n\n\t(1:1 - Prepared with chicken patty & beef bacon)\t\n\n");
    printf("\t7. Chicken with sausage Burger         .......................... 250/=\n\n\t(1:1 - Prepared with chicken patty, cheese & special sauce)\t\n\n");
    printf("\t8. Chicken Cheese Blast Burger         .......................... 250/=\n\n\t(1:1 - Prepared with 2 pcs melted cheese inside a double chicken patty & cheese outside)\t\n\n");
    printf("\t9. Double Decker Chicken Cheese Burger .......................... 270/=\n\n\t(1:1 - Prepared with 2 pcs chicken patty & 2 pcs cheese)\t\n\n");
    printf("\t10. Giganto Chicken                    .......................... 350/=\n\n\t(1:1 - Prepared with giant chicken patty, 2 pcs cheese, 2 pcs beef bacon & bbq sauce)\t\n\n");

    printf("\n\tCHICKEN :\n\n");
    printf("\t11. Chicken Breast ...................  90/=\n");
    printf("\t12. Chicken Wings ....................  65/=\n");

    printf("\n\tPizza :\n\n");
    printf("\t13. Spicy Sausage                       .......................... 350/=\n\t\n");
    printf("\t14. Creamy Chicken & Sausage            .......................... 450/=\n\t\n");
    printf("\t15. Kolongko - The Disgrace             .......................... 770/=\n\t\n");
    printf("\t16. Simple Er Modhe Gorgeous (SMG)      .......................... 550/=\n\t\n");

    printf("\n\tLove in a Cup :\n\n");
    printf("\t17. Choco Fudge      .......................... 190/=\n\n\t(A heavenly creation of rich chocolate fudge & smooth chocolate cream in a cup)\t\n\n");
    printf("\t18. Velvety Red      .......................... 190/=\n\n\t(Divine taste of red velvet cake paired up with smooth velvety cream cheese filling for the ultimate dessert pairing)\t\n\n");
    printf("\t19. Oreo & Cheese    .......................... 190/=\n\n\t(Crunchy oreo crust & a creamy cheesecake filling together to make the ultimate cookies & cream dessert)\t\n\n");
    printf("\t20. Tiro-Miss-U      .......................... 190/=\n\n\t(An elegant & rich layed italian dessert made with cookies & cheese, combined with fluffy coffee-flavored goodness)\t\n\n ");


    printf("\n\tDRINKS :\n\n");
    printf("\t21. Coca-Cola      ........................ 40/=\n");
    printf("\t22. Pepsi        ........................ 40/=\n");
    printf("\t23. Mountain Dew   ........................ 40/=\n");
    printf("\t21. Water          ........................ 15/=\n");
    printf("\n\n\tOrder your dish: (Enter 0 to finish order)\n");
    for(;;)
    {
        counter++;
        printf("\t Enter Food ID: ");
        scanf("%d",&arID[counter-1]);
        if(arID[counter-1]==0)
        {
            break;
        }
        printf("\t Enter Quantity: ");
        scanf("%d",&arqty[counter-1]);

    }
    system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\t\tThanks for your order. We are getting ready the dishes.\n\t\tUntil then, have some selfies with friends. Enjoy!\n\n\n\n\n\t\t\t  <Enter 1 to check your bill>\n\t\t\tEnter your choice: ");
    printf("To play game press 4\n");
    scanf("%d",&decision);
    printf("\n\n\n\n\n\n\n\n");

    counter--;

    if(decision==1)
    {
        Bill_show(arID,arqty,counter);
    }

    else if(decision==2)
    {
       goto work;
    }

    else if(decision==3)
    {
        main();
    }

}





void Bill_show(int arID[],int arqty[],int counter)
{

    int n;
    system("cls");
    system("color B0");

    int i,sum=0;
    int costs[11]={120,40,70,90,90,65,65,230,25,25,40};
    char items[11][16]={"Beef Burger","Hot Dog","Donuts","French Fries","Chicken Breast","Chicken Wings","Ice Cream","Sweets","Coca-Cola","Mirinda","mountain dew"};
    printf("\n\nYour Bill:\n\n\n\t\tItem(s)\t\t     Quantity\t\t    Cost\n\n\n\n");

    for(i=0;i<counter;i++)
    {
        printf("\t%2d. %-16s ________\t%-5d piece(s) ____ %7d\n",i+1,items[arID[i]-1],arqty[i],arqty[i]*costs[arID[i]-1]);
        sum=sum+(costs[arID[i]-1]*arqty[i]);
    }

    printf("\n\n\n\n\t\t\t\t\t\t\t  Total = %d\n\n\n\n",sum);
    token ++;
    tokens[token]=sum;
    printf("\tYour token number is %d. Use this token while paying the bill.\n\n\n\n\n\t\t\t<enter (1) to give another order>\n\n\t\t\t<enter (2) to go to the main menu>\n\n\t\n\t\t\tEnter your choice: ",token);
    scanf("%d",&n);
    printf("\n\n\n");
    if(n==1)
    {
        menu_order();
    }
    else if(n==2)
    {
        main();

    }

}




void Bill_Payment()
{

    int k,i,cash,changer,n;
    redo:
    payment_counter++;
    system("cls");
    system("color 3F");
    printf("\n\n\n\t\t\tEnter your token number: ");
    scanf("%d",&k);
    printf("\t\t\tYour Total Bill is = %d",tokens[k]);
    work:
            printf("\n\t\t\tPay your bill: ");
            scanf("%d",&cash);
    changer = cash-tokens[k];
    if(changer == 0)
    {
        printf("\n\t\tThanks for your payment. Have a great day!\n");
    }
    else if (changer<0)
    {
        system("cls");
        printf("\n\t\t\tAmount is not sufficient. :(\n\t\tPlease pay the fair price of your bill\n");
        goto work;
    }
    else
    {
        printf("\n\n\n\t\tHere is your change : (%d - %d) = %d Tk.\n\t\t  ",cash,tokens[k],changer);

            for(i=0;i<19;i++)
            {
                printf("_");
            }
            if(changer>=1000 )
                {printf("\n\t\t1000 Tk. note(s) = %d\n",changer/1000);
                changer=changer%1000;}
            if(changer>=500 && changer<1000)
            {printf("\n\t\t 500 Tk. note(s) = %d\n",changer/500);
            changer=changer%500;}
            if(changer>=100 && changer<500)
            {printf("\n\t\t 100 Tk. note(s) = %d\n",changer/100);
            changer= changer%100;}
            if(changer>=50 && changer<100)
            {printf("\n\t\t  50 Tk. note(s) = %d\n",changer/50);
            changer=changer%50;}
             if(changer>=10 && changer<50)
            {printf("\n\t\t  10 Tk. note(s) = %d\n",changer/10);
            changer=changer%10;}
            if(changer>=5 && changer<10)
            {printf("\n\t\t   5 Tk. note(s) = %d\n",changer/5);
            changer=changer%5;}
            if(changer>=2 && changer<5)
            {printf("\n\t\t   2 Tk. note(s) = %d\n",changer/2);
            changer=changer%2;}
            if(changer>=1 && changer<2)
            {printf("\n\t\t   1 Tk. note(s) = %d\n",changer/1);
            changer=changer%1;}

            printf("\t\t  ");
            for(i=0;i<19;i++)
            {
                printf("_");
            }

        printf("\n\n\n\n\n\t\t\tThanks for your payment.\n\t\t\t    Have a great day!\n",changer);



    }
    printf("\n\n\t\t\t<Enter (1) to pay another bill.>\n\t\t\t<Enter (2) to go back main menu>\n\n\n\t\t\tEnter your choice: \t");
        scanf("%d",&n);
        if(n==2)
        {
            main();
        }
        else if(n==1)
        {
           goto redo;
        }

}




int main()
 {

    char k,j,n,d;
    k = main_page();

    if(k>'3' || k<'1')
    {

        printf("\n\n -----------------------You Entered Wrong Number------------------------\n  ------------------------Enter Correct Number------------------------\n");
    }
    else if(k=='1')
    {
        menu_order();

    }

    else if(k=='2')
    {
        Bill_Payment();
    }

    else if(k=='3')
    {
        system("cls");
        system("color 30");
        printf("\n\n\n\n\n\t\t       @@_@_\n\t\t         `'*'`  Cafe Nirvana\n\t\t\t\t\t`'*'`-@@_@\n\n");
        printf("\n\n\n\t\t\tThis session order recieved : %d\n\n",token);
        printf("\t\t\tThis session bill paid      : %d\n\n",payment_counter);
        if(payment_counter<token)
        {printf("\t\t\t\tYet to pay          : %d\n\n\n\n\n\n",token-payment_counter);}
        else
        {
            printf("\n\n\n\n\n\n");
        }
        return 0;
    }

 }

