#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "acc.h"

void modify(struct account *acct)
{
    printf("Da hell u want me to do: \n");
    printf("1. Change name\n");
    printf("2. Change age\n");
    printf("3. Change address\n");
    printf("4. Change sex\n");
    printf("5. Change balance\n");

    int choice;
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
        case 1:
            printf("Nhap ten: \t");
            fgets(acct->name, 50, stdin);
            acct->name[strcspn(acct->name, "\n")] = '\0'; // remove trailing newline
            goto HERE;
            break;

        case 2:
            printf("Nhap tuoi: \t");
            scanf("%d", &acct->age);
            getchar();
            goto HERE;
            break;

        case 3:
            printf("Nhap dia chi: \t");
            fgets(acct->address, sizeof(acct->address), stdin);
            acct->address[strcspn(acct->address, "\n")] = '\0'; // remove trailing newline
            goto HERE;
            break;

        case 4:
            printf("Nhap gioi tinh: \t");
            scanf("%d", &acct->sex);
            getchar();
            goto HERE;
            break;
                
        case 5:
            printf("Nhap so tien: \t");
            scanf("%f", &acct->money);
            getchar();
            goto HERE;
            break;
    }

        HERE:
        while(1)
        {
            printf("1. Keep modifying\n");
            printf("2. Return to main menu\n");
            int subchoice;
            scanf("%d", &subchoice);
            getchar();
            if (subchoice == 2) 
            {
                printf("Returning to main menu.\n");
                break;
            } 
            else 
            {
                modify(acct);
                break;
            }
        }

    printf("All done! Fuck off!\n");
    system("cls");

}