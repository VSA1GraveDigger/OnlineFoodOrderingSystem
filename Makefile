target : signup.c validation.c account_check.c login.c hotels.c search_by_hotels.c hotel_initialize.c cart.c OnlineFoodOrder.c header.h
	gcc signup.c validation.c account_check.c login.c hotels.c search_by_hotels.c hotel_initialize.c cart.c OnlineFoodOrder.c -o all.out
run : target
	./all.out
clean :
	rm all.out
	