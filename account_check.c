// Function to check if the account already exists or not
#include "header.h"
#include "OnlineFoodOrder.c"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
char t_email[50],t_name[100];
char t_password1[100];
int t_mobile[50];
int iter,j;
int t_age;

void account_check()
{
    
    for (iter = 0; iter < 100; iter++) {
        // Check whether the email and password are already matched with existed account
        if (!(strcmp(t_email,
                     s[iter].email)
              && strcmp(t_password1,
                        s[iter].password))) {
            printf("\n\nAccount Already");
            printf("Existed. Please"
                   " Login !!\n\n");
            main();
            break;
        }
    }
  
    // If account does not already
    // existed, it creates a new
    // one with new inputs
    if (iter == 100) {
        strcpy(s[j].uname, t_name);
        s[j].age = t_age;
        strcpy(s[j].password,
               t_password1);
        strcpy(s[j].email, t_email);
        strcpy(s[j].mobile, t_mobile);
        j++;
        printf("\n\n\nAccount"
               " Successfully");
        printf("Created!!\n\n");
    }
}