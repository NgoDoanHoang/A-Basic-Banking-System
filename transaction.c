#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "acc.h" 
//#include "delay.h"   

void transaction(struct account *acct)
{   
   printf("What do you wanna do today, sir?\n");
   printf("1. Add more\n");
   printf("2. Withdraw\n");
   printf("3. Invest with 5%% interest per month\n");               //2 %% de in ra 1%

   int choice;
   scanf("%d", &choice);
   getchar();

   float amount = 0.0;

   switch(choice)
   {
    case 1:
        printf("How much u wanna add: \t");
        scanf("%f", &amount);
        getchar();
        acct->money = acct->money + amount;
        break;
    
    case 2:
        printf("How much u wanna withdraw: \t");
        scanf("%f", &amount);
        getchar();
        acct->money = acct->money - amount;
        break;
    
    case 3:
        printf("How much do u wanna invest: \t");
        scanf("%f", &amount);
        getchar();
        int month;
        printf("How long then: \t");
        scanf("%d", &month);

        acct->money = acct->money - amount;
        for (int i=0; i<month; i++)
        {
            amount = amount + amount*5/100;
        }
        acct->money = acct->money + amount;
        break;

    default:
        printf("Invalid!\n");
        break;
   }

   printf("All done! Fuck off!");
   //delay(200);
}