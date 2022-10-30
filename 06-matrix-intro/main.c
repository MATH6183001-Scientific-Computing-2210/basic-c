#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void testMatrixWithStack(int N){

    int matrix[N][N];

    // write
    for (int i = 0; i< N ; i++){
        for (int j = 0; j< N ; j++){
            matrix[i][j] = N*i + j;
        }
    }

    // read
    int tmp;
    for (int i = 0; i< N ; i++){
        for (int j = 0; j< N ; j++){
            tmp = matrix[i][j];
        }
    }

}

void test1Pointer(int N){

    int *matrix = (int *) malloc(N*N*sizeof(N));

    if (matrix==NULL){
        printf("Malloc failed \n");
        exit(0);
    } else {

        // write
        for (int i = 0; i< N ; i++){
            for (int j = 0; j< N ; j++){
                matrix[N*i + j] = N*i + j;
            }
        }

        // read
        int tmp;
        for (int i = 0; i< N ; i++){
            for (int j = 0; j< N ; j++){
                tmp = matrix[N*i + j];
            }
        }
    }


    free(matrix);

}

void testArrayOfPointer(int N){

    int *matrix[N];

    for(int i; i<N; i++){
        matrix[i] = (int *) malloc(N*sizeof(N));
        if (matrix[i]==NULL){
            printf("Malloc failed \n");
            exit(0);
        }
    }
    // write
    for (int i = 0; i< N ; i++){
        for (int j = 0; j< N ; j++){
            matrix[i][j] = N*i + j;
        }
    }

    // read
    int tmp;
    for (int i = 0; i< N ; i++){
        for (int j = 0; j< N ; j++){
            tmp = matrix[i][j];
        }
    }
    
    for(int i; i<N; i++){
        free(matrix[i]);
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
    testMatrixWithStack(N);
    endTime = (float)clock()/CLOCKS_PER_SEC;
    printf("testMatrixWithStack -> elapsed time: %f ms\n",1000*(endTime-startTime));
    
    startTime = (float)clock()/CLOCKS_PER_SEC;
    test1Pointer(N);
    endTime = (float)clock()/CLOCKS_PER_SEC;
    printf("test1Pointer -> elapsed time: %f ms\n",1000*(endTime-startTime));
    
    startTime = (float)clock()/CLOCKS_PER_SEC;
    testArrayOfPointer(N);
    endTime = (float)clock()/CLOCKS_PER_SEC;
    printf("testArrayOfPointer -> elapsed time: %f ms\n",1000*(endTime-startTime));

    // printf("%lu \n",sizeof(int));

    return 0;
}