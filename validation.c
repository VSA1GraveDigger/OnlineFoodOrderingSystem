// Function to validate the user for
// the signup process
#include "header.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char t_name[50],t_email[50],t_newpassword[50],t_confirmpassword[50],t_phno[50];
int flag,t_age,i,j,count,caps,small,numbers,special,success;
int validation()
{
    // Validate the name
    for (i = 0; t_name[i] != '\0'; i++) {
        if (!((t_name[i] >= 'a' && t_name[i] <= 'z')
              || (t_name[i] >= 'A'
                  && temp_name[i] <= 'Z'))) {
            printf("\nPlease Enter thevalid Name\n");
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        count = 0;
  
        // Validate the Email ID
        for (i = 0;
             t_email[i] != '\0'; i++) {
            if (t_email[i] == '@'
                || t_email[i] == '.')
                count++;
        }
        if (count >= 2
            && strlen(t_email) >= 5) {
            // Validating the password
            // check if it matches with
            // correct password or not
            if (!strcmp(t_newpassword,
                        t_confirmpassword)) {
                if (strlen(t_newpassword) >= 8
                    && strlen(t_newpassword) <= 12) {
                    caps = 0;
                    small = 0;
                    numbers = 0;
                    special = 0;
                    for (i = 0;
                         t_newpassword[i]
                         != '\0';
                         i++) {
                        if (t_newpassword[i] >= 'A'
                            && t_newpassword[i] <= 'Z')
                            caps++;
                        else if (t_newpassword[i] >= 'a'
                                 && t_newpassword[i]
                                        <= 'z')
                            small++;
                        else if (t_newpassword[i] >= '0'
                                 && t_newpassword[i]
                                        <= '9')
                            numbers++;
                        else if (t_newpassword[i] == '@'
                                 || t_newpassword[i] == '&'
                                 || t_newpassword[i] == '#'
                                 || t_newpassword[i]
                                        == '*')
                            special++;
                    }
                    if (caps >= 1 && small >= 1
                        && numbers >= 1 && special >= 1) {
                        // Validating the Input age
                        if (t_age != 0 && t_age > 0) {
                            // Validating the Input mobile
                            // number
                            if (strlen(t_phno) == 10) {
                                for (i = 0; i < 10; i++) {
                                    if (t_phno[i]
                                            >= '0'
                                        && t_phno[i]
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