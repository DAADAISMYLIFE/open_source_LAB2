OBJECTS = src/add.o src/sub.o src/mul.o src/div.o

exec/main1 : lib/libstatic.a
	gcc -g -o exec/main1 -I./include -L./lib src/main1.c -lstatic

lib/libstatic.a : $(OBJECTS)
	ar rcs lib/libstatic.a $(OBJECTS)

src/add.o : src/add.c
	gcc -o src/add.o -c src/add.c

src/sub.o : src/sub.c
	gcc -o src/sub.o -c src/sub.c

src/mul.o : src/mul.c
	gcc -o src/mul.o -c src/mul.c

src/div.o : src/div.c
	gcc -o src/div.o -c src/div.c

clean :
	rm -f exec/main1 $(OBJECTS)
