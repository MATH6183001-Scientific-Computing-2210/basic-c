CC=gcc

main: main.o
	${CC} -Wall -O0 -o main.out main.o

main.o: main.c 
	${CC} -o main.o -c main.c 

clean:
	rm *.o 
	rm *.out 