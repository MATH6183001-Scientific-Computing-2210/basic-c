#include <stdio.h>

int Addition(int a, int b){
    int c = a+b;
    return c;
}

int main(void){

    int a = 10;
    int b = 13;

    printf("%d + %d = %d\n", a,b,Addition(a,b) );

    return 0;

}