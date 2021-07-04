target : OnlineFoodOrder.c signup.c validation.c header.h
	gcc OnlineFoodOrder.c signup.c validation.c -o all.out
run : target
	./all.out
clean :
	rm all.out
	