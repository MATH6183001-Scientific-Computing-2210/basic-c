
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


int main (int argc, char *argv[]) {

    if (argc != 2){
        printf("Please run it using ./main.out <int>\n");
        exit(0);
    }

    int N = atoi(argv[1]);
    float startTime, endTime;

    startTime = (float)clock()/CLOCKS_PER_SEC;
    tryStack(N);
    endTime = (float)clock()/CLOCKS_PER_SEC;
    printf("Stack -> elapsed time: %f ms\n",1000*(endTime-startTime));

    startTime = (float)clock()/CLOCKS_PER_SEC;
    tryHeap(N);
    endTime = (float)clock()/CLOCKS_PER_SEC;
    printf("Heap -> elapsed time: %f ms\n",1000*(endTime-startTime));

    return 0;
}