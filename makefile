#!make -f


all: start mymathd mymaths maind mains

start: main.c power.c basicMath.c myMath.h
	gcc -Wall -fPIC -c main.c power.c basicMath.c

mains: main.o libmyMath.a
	gcc -Wall -o mains main.o libmyMath.a

maind: main.o
	gcc -Wall -o maind main.o ./libmyMath.so

mymaths: main.o
	 ar -rcs libmyMath.a main.o

mymathd: main.o
	 gcc -shared -o libmyMath.so main.o

clean:
			rm -f *.o *.a *.so mains maind
