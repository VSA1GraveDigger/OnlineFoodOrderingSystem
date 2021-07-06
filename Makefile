target : OnlineFoodOrder.c signup.c header.h
	gcc validation.c account_check.c signup.c  login.c search_by_hotels.c hotel_initialize.c cart.c OnlineFoodOrder.c -o all.out
run : target
	./all.out
clean :
	rm all.out
	