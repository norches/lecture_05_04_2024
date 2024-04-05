CC=gcc
FLAGS=-Wall -Werror -Wextra -g


all: null_pointer segfault infinite_loop mem_leak r_string bank


null_pointer : null_pointer.c
	$(CC) $^ $(FLAGS) -o $@

segfault: segfault.c
	$(CC) $^ $(FLAGS) -o $@

infinite_loop: infinite_loop.c
	$(CC) $^ $(FLAGS) -o $@

mem_leak: mem_leak.c
	$(CC) $^ $(FLAGS) -o $@

r_string: r_string.c
	$(CC) $^ $(FLAGS) -o $@

bank: bank.c
	$(CC) $^ $(FLAGS) -o $@

clean:
	rm -f bank
	rm -f r_string
	rm -f mem_leak
	rm -f infinite_loop
	rm -f segfault
	rm -f null_pointer

rebuild: clean all