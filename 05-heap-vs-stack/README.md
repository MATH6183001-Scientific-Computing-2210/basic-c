# 05-heap-vs-stack

The idea of this project is to compare how fast it is when I write data to heap memory and stack memory.

Tho, you can Google it, you need to validate it as you'll find different answers.
For example,

- [stackoverflow 01](https://stackoverflow.com/questions/24057331/is-accessing-data-in-the-heap-faster-than-from-the-stack#:~:text=The%20stack%20is%20faster%20because,in%20an%20allocation%20or%20free.)

    The answer says that stack is faster.

- [dev.to](https://dev.to/havarem/comment/kal6)

    The answer states that it is about the same speed.

Based on my experience, it really depends on your use case.
Suppose that you want to compare two functions inside which you'll create an array of `int`, initialize values (assign values) to the array, and access (read) the value one by one;
Then, you can utilize the stack memory as follows.
```c
void tryStack(unsigned int N) {

    int x[N];
    // write
    for (int i =0; i<N; i++){
        x[i] = i;
    }
    // read
    int tmp;
    for (int i =0; i<N; i++){
        tmp = x[i];
    }

}
```
Also, you can utilze the heap memory as follows.
```c
void tryHeap(unsigned int N) {
    int *x = (int*) malloc(N * sizeof(int));

    if (x == NULL){
        printf("failed to allocate the mem\n");
        exit(0);
    } else {
        // write
        for (int i =0; i<N; i++){
            x[i] = i;
        }
        // read
        int tmp;
        for (int i =0; i<N; i++){
            tmp = x[i];
        }

    }

    free(x);
}
```

For compilation, you can refer to [Compilation](#compilation).
You can run it as follows.
```
./main.out <insert a positive integer number>
```
for example:
```
./main.out 100
```

As the result, from my machine, I get:
```
./main.out 10                                                                          
Stack -> elapsed time: 0.004000 ms
Heap -> elapsed time: 0.002000 ms

./main.out 100                                                                         
Stack -> elapsed time: 0.004000 ms
Heap -> elapsed time: 0.003000 ms

./main.out 1000                                                                        
Stack -> elapsed time: 0.009000 ms
Heap -> elapsed time: 0.012000 ms

./main.out 10000                                                                       
Stack -> elapsed time: 0.067000 ms
Heap -> elapsed time: 0.075000 ms

./main.out 100000                                                                      
Stack -> elapsed time: 0.832000 ms
Heap -> elapsed time: 0.716000 ms

./main.out 1000000                                                                     
Stack -> elapsed time: 8.375000 ms
Heap -> elapsed time: 5.909999 ms
```

My conclusion so far is that if the size of an array is relatively small, the stack memory has the edge as the heap memory has the overhead cost due to `malloc` and `free` functions.

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