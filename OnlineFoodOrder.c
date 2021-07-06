#include "header.h" 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int choice;
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
            login();
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
    return 0;
    printf("jbhb");



}


