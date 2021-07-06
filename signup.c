#include "header.h"
#include<stdio.h>
char username[50];
int age;
char emailid[50];
char newpassword[50];
char confirmpassword[50];
char phno[50];
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
    //int val=validation();


}