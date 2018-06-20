all : chop.c
	gcc -Wall -Werror -fsanitize=address -o chop chop.c
clean :
	rm -rf chop
