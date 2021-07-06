target : OnlineFoodOrder.c signup.c header.h
	gcc OnlineFoodOrder.c signup.c validation.c account_check.c login.c -o all.out
run : target
	./all.out
clean :
	rm all.out
	