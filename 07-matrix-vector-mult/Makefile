CC=gcc

main: main.o utils.o
	${CC} -Wall -O0 -o main.out main.o utils.o

main.o: main.c 
	${CC} -o main.o -c main.c

utils.o: utils/utils.c 
	${CC} -o utils.o -c utils/utils.c

clean:
	rm -f *.o
	rm -f *.out
