CC = gcc

correct: my_correct_lib.o 
	${CC} -c main_correct.c
	${CC} -o main_correct.out main_correct.o my_correct_lib.o

incorrect: my_incorrect_lib.o 
	${CC} -c main_incorrect.c
	${CC} -o main_incorrect.out main_incorrect.o my_incorrect_lib.o

my_correct_lib.o: 
	${CC} -o my_correct_lib.o -c my_correct_lib/my_lib.c

my_incorrect_lib.o: 
	${CC} -o my_incorrect_lib.o -c my_incorrect_lib/my_lib.c

clean:
	rm *.o
	rm *.out