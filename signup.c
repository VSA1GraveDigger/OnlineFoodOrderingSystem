#include "header.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char t_name[50],t_email[50],t_newpassword[50],t_confirmpassword[50],t_phno[50];
int val,t_age;
void signup()
{
	printf("Enter Your name\t");
	scanf("%s", t_name );

	printf("Enter Your Age\t");
	scanf("%d", &t_age);

	printf("Enter Your Email\t");
	scanf("%s", t_email);

	printf("Enter Password\t");
	scanf("%s", t_newpassword);

	printf("Confirm Password\t");
	scanf("%s", t_confirmpassword);

	printf("Enter Your Mobile Number\t");
	scanf("%s", t_phno);
    val = validation();
	
	if(val == 1)
		account_check();
	



}