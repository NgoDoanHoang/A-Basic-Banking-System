//how to link files.c ini the same project: 
//run this in terminal:      
//gcc test.c create.c -o my_program_name
//note: need to build all ctrl+shift+B at first even though it wont work

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "create.h"
#include "menu.h"
#include "modify.h"
#include "transaction.h"
#include "list.h"
#include "acc.h"                                //struct here


int main()
{
    int choice;
    struct account acct = {"", 0, "", 0, 0.0};  // khai bao gia tri mac dinh
    do
    {
        menu();                  

        printf("\nEnter your choice: \n");
        scanf("%d", &choice);
        getchar();                              //consume new line after scanf
        system("cls");

        switch (choice)
        {
            case 1:
                create(&acct);                  //chi can dua dia chi ten struct con
                break;

            case 2:
                modify(&acct);
                break;

            case 3:
                list(&acct);
                break;

            case 4:
                transaction(&acct);
                break;
                
            case 5:
                printf("Thank you for using myBank!. Your money is safe and mine now!\n");
        }

    } while ( choice!=5 );

    return 0;    
}