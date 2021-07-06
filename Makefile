target : OnlineFoodOrder.c signup.c header.h
	gcc validation.c account_check.c signup.c  login.c OnlineFoodOrder.c -o all.out
run : target
	./all.out
clean :
	rm all.out
	