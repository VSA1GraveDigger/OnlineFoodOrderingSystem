#include "header.h" 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int choice;
typedef struct details {
    char uname[100];
    int age;
    char password[100];
    char email[100];
    char mobile[10];
}detail;
detail s[100];
int main()
{
    
    while(1)
    {
    printf("Welcome To Food World!!!\n");
    printf("1. Signup\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            signup();
            break;
        }
        case 2:
        {
            //login();
            break;
        }
        case 3:
        {
            break;
        }
        default:
        {
            printf("Invalid choice\n Please enter valid input\n");
            break;
        }

    }
    }



}


