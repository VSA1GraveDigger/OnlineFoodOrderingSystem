// Function that implements the
// functionality search by hotels

#include "header.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int food_choice,n,hotel_choice;
void search_by_hotels()
{
	hotel_initialize();
	printf("\n\nPlease Choose thehotels\n\n1) %s\n2) %s\n3) %s",
		m[1].hotel,
		m[2].hotel, m[3].hotel);
	printf("\n4) Exit\n\nPlease ");
	printf("select the hotel\t");

	scanf("%d", &hotel_choice);

	if (hotel_choice > 4) {
		printf("Please Enter the");
		printf("valid choice\n\n");
		search_by_hotels();
	}
	else if (hotel_choice == 4)
		exit(1);
	else
		hotels(hotel_choice);
}


