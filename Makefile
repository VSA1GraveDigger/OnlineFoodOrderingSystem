target : OnlineFoodOrder.c signup.c header.h
	gcc OnlineFoodOrder.c signup.c account_check.c validation.c -o all.out
run : target
	./all.out
clean :
	rm all.out
	