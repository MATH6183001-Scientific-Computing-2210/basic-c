# 06-matrix-intro

Similar to [heap vs. stack](https://github.com/MATH6183001-Scientific-Computing-2210/basic-c/tree/main/05-heap-vs-stack), we could test how we represent a matrix in C.
In this project, I only show three of many ways.
(Feel free to contribute and do a PR request, if you want to add more examples).

## First method

You could use an all-stack-strategy such as:
```c
int matrix[N][N]; // declaration
matrix[i][j]; // to read or write into the matrix
```
Remember that this matrix is stored in the stack memory, which might be limited in the first place.
The benefit is that it is simple and intuitive as the row index `i` and the column index `j` are separated by square brackets.

## Second method

If you want to use dynamic memory allocation, you could, for example, unfold a 2D matrix into 1D array as:
```c
int *matrix = (int *) malloc(N*N*sizeof(N));
matrix[N*i + j] // to read or write
```
I guess this is the friendliest method considering how RAM is layout, i.e., a stack of storage blocks. 

## Third method

You can combine the [first](#first-method) and the [second](#second-method) as follows:
```c
int *matrix[N];

for(int i; i<N; i++){
    matrix[i] = (int *) malloc(N*sizeof(N));
}

matrix[i][j] // to read or write
```

This method is alright, as long as the length of the row does not exceed your computer stack size limits.

# How to

You can run it as follows.
```sh
./main.out <insert a positive integer number>
```
for example:
```sh
./main.out 100
```

As the result, from my machine, I get:
```
./main.out 10        
testMatrixWithStack -> elapsed time: 0.005000 ms
test1Pointer -> elapsed time: 0.003000 ms
testArrayOfPointer -> elapsed time: 0.002000 ms
./main.out 100  
testMatrixWithStack -> elapsed time: 0.072000 ms
test1Pointer -> elapsed time: 0.128000 ms
testArrayOfPointer -> elapsed time: 0.089000 ms
./main.out 1000 
testMatrixWithStack -> elapsed time: 7.838000 ms
test1Pointer -> elapsed time: 7.137000 ms
testArrayOfPointer -> elapsed time: 8.077000 ms
```

## Compilation

Run
```sh
make
```

It'll print:
```
gcc -o main.o -c main.c 
gcc -Wall -O0 -o main.out main.o 
```

It'll output `main.out`.
