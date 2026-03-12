CC=gcc

all:
	$(CC) ed25519.c verify.c main.c -o ed25519_test

run:
	./ed25519_test

clean:
	rm -f ed25519_test
