
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "my_incorrect_lib/my_lib.h"

int generateRandomInt(int lower, int upper){
    return (rand() % (upper - lower + 1)) + lower;
}

int main (void) {

    // generate seed
    srand(time(0));
    int a, b;

    const int NUM_LOOP = 1000000;

    float startTime = (float)clock()/CLOCKS_PER_SEC;
    for (int i = 0; i < NUM_LOOP; i++){
        a = generateRandomInt(0,20);
        b = generateRandomInt(0,20);
        if (a+b != Addition(a,b)){
            printf("[ERROR] a=%d + b=%d = %d\n",a,b,Addition(a,b));
            break;
        }
    }
    float endTime  = (float)clock()/CLOCKS_PER_SEC;

    printf("Time elapsed: %f s\n",endTime - startTime);

    return 0;
}