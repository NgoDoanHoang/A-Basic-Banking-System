#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "acc.h"


void create(struct account *acct)
{ 
    printf("Nhap ten: \t");
    fgets(acct->name, 50, stdin);
    acct->name[strcspn(acct->name, "\n")] = '\0'; // remove trailing newline

    printf("Nhap tuoi: \t");
    scanf("%d", &acct->age);
    getchar();

    printf("Nhap dia chi: \t");
    fgets(acct->address, sizeof(acct->address), stdin);
    acct->address[strcspn(acct->address, "\n")] = '\0'; // remove trailing newline

    printf("Nhap gioi tinh: \t");
    scanf("%d", &acct->sex);
    getchar();

    printf("Nhap so tien: \t");
    scanf("%f", &acct->money);
    getchar();
}