#include<stdio.h>
#include<stdlib.h>
int choice;
char username[50];
int age;
char emailid[50];
char newpassword[50];
char confirmpassword[50];
char phno[50];

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

void signup()
{
	printf("Enter Your name\t");
	scanf("%s", username );

	printf("Enter Your Age\t");
	scanf("%d", &age);

	printf("Enter Your Email\t");
	scanf("%s", emailid);

	printf("Enter Password\t");
	scanf("%s", newpassword);

	printf("Confirm Password\t");
	scanf("%s", confirmpassword);

	printf("Enter Your Mobile Number\t");
	scanf("%s", phno);

}
printf("this is manasa");