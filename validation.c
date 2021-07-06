#include "header.h"
#include<stdio.h>
#include<stdlib.h>
char t_name[100];
char t_email[100];
char t_password1[100],t_password2[100];
int caps,small,numbers,special;
int t_age[50],t_mobile[50];
int success=0;

int validate()
{
    // Validate the name
    int iter,flag,count;
    for (iter = 0; t_name[iter] != '\0'; iter++) {
        if (!((t_name[iter] >= 'a' && t_name[iter] <= 'z')
              || (t_name[iter] >= 'A'
                  && t_name[iter] <= 'Z'))) {
            printf("\nPlease Enter the valid name\n");
            
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        count = 0;
  
        // Validate the Email ID
        for (iter = 0;
             t_email[iter] != '\0'; iter++) {
            if (t_email[iter] == '@'
                || t_email[iter] == '.')
                count++;
        }
        if (count >= 2
            && strlen(t_email) >= 5) {
            // Validating the password
            // check if it matches with
            // correct password or not
            if (!strcmp(t_password1,
                        t_password2)) {
                if (strlen(t_password1) >= 8
                    && strlen(t_password1) <= 12) {
                    caps = 0;
                    small = 0;
                    numbers = 0;
                    special = 0;
                    for (iter = 0;
                         t_password1[iter]
                         != '\0';
                         iter++) {
                        if (t_password1[iter] >= 'A'
                            && t_password1[iter] <= 'Z')
                            caps++;
                        else if (t_password1[iter] >= 'a'
                                 && t_password1[iter]
                                        <= 'z')
                            small++;
                        else if (t_password1[iter] >= '0'
                                 && t_password1[iter]
                                        <= '9')
                            numbers++;
                        else if (t_password1[iter] == '@'
                                 || t_password1[iter] == '&'
                                 || t_password1[iter] == '#'
                                 || t_password1[iter]
                                        == '*')
                            special++;
                    }
                    if (caps >= 1 && small >= 1
                        && numbers >= 1 && special >= 1) {
                        // Validating the Input age
                        if (t_age != 0 && t_age > 0) {
                            // Validating the Input mobile
                            // number
                            if (strlen(t_mobile) == 10) {
                                for (iter = 0; iter < 10; iter++) {
                                    if (t_mobile[iter]
                                            >= '0'
                                        && t_mobile[iter]
                                               <= '9') {
                                        success = 1;
                                    }
                                    else {
                                        printf("\n\nPlease");
                                        printf("Enter Valid ");
                                        printf("Mobile "
                                               "Number\n\n");
                                        return 0;
                                        break;
                                    }
                                }
  
                                // Success is assigned with
                                // value 1, Once every
                                // inputs are correct.
                                if (success == 1)
                                    return 1;
                            }
                            else {
                                printf("\n\nPlease Enter the");
                                printf("10 digit mobile");
                                printf("number\n\n");
                                return 0;
                            }
                        }
                        else {
                            printf("\n\nPlease Enter ");
                            printf("the valid age\n\n");
                            return 0;
                        }
                    }
                    else {
                        printf("\n\nPlease Enter the");
                        printf("strong password, Your ");
                        printf("password must contain ");
                        printf("atleast one uppercase, ");
                        printf("Lowercase, Number and ");
                        printf("special character\n\n");
                        return 0;
                    }
                }
                else {
                    printf("\nYour Password is very");
                    printf("short\nLength must ");
                    printf("between 8 to 12\n\n");
                    return 0;
                }
            }
            else {
                printf("\nPassword "
                       "Mismatch\n\n");
                return 0;
            }
        }
        else {
            printf("\nPlease Enter Valid E-Mail\n\n");
            return 0;
        }
    }
}
