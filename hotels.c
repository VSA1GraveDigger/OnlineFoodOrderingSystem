#include "header.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int food_choice,n,hotel_choice;
void hotels(int hotel_choice)
{

	int total=0;	
	while (1) {
		// Displays the list of foods
		// available in selected hotel
		printf("\n\nList of foods available");
		printf("in %s\n\n1) %s\tRs: %d\n2)",
			m[hotel_choice].hotel,
			m[hotel_choice].first_food,
			m[hotel_choice].first);

		printf("%s\tRs: %d\n3) %s\tRs: %d\n4)",
			m[hotel_choice].second_food,
			m[hotel_choice].second,
			m[hotel_choice].third_food,
			m[hotel_choice].third);

		printf("Cart\n5) Exit\n\nPlease Enter Your Choice\t");
		scanf("%d", &food_choice);

		// Get the input for no. of foods
		// to calculate the total amount
		if (food_choice == 1) {
			printf("Please Enter the ");
			printf("Count of %s\t",
				m[hotel_choice].first_food);
			scanf("%d", &n);

			total = total
					+ (n * m[hotel_choice].first);
		}
		else if (food_choice == 2) {
			printf("Please Enter Count");
			printf("of %s\t",
				m[hotel_choice].second_food);
			scanf("%d", &n);
			total = total
					+ (n * m[hotel_choice].second);
		}
		else if (food_choice == 3) {
			printf("Please Enter the Count");
			printf("of %s\t",
				m[hotel_choice].third_food);
			scanf("%d", &n);
			total = total
					+ (n * m[hotel_choice].third);
		}

		// Once the user, completed their
		// order, they can go to cart
		// by giving choice as 4.
		else if (food_choice == 4) {
			cart();
		}
		else if (food_choice == 5) {
			search_by_hotels();
		}
		else {
			printf("Please Enter the");
			printf("valid Choice\n\n");
		}
	}
    

}