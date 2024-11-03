exec/main : src/main.c lib/libperror.a
	gcc -g -o exec/main -I./include -L./lib src/main.c -lperror

lib/libperror.a : src/my_perror.o
	ar rcs lib/libperror.a src/my_perror.o

src/my_perror.o : src/my_perror.c
	gcc -o src/my_perror.o -c src/my_perror.c

clean :
	rm -f exec/main lib/libperror.a src/my_perror.o

