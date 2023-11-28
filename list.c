#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "acc.h"
#include "delay.h"

void list(struct account *acct)
{
    printf("This is your account: \n");
    printf("Name: %s\n", acct->name);
    printf("Age: %d\n", acct->age);
    printf("Address: %s\n", acct->address);
    printf("Sex: %s\n", acct->sex ? "Male" : "Female");
    printf("Balance: $%.2f\n", acct->money);

    delay(200);
}