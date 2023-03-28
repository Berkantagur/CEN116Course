#include <stdio.h>

int main(void){

    int n = 12;
    int *nPtr; //= NULL //variable 

    nPtr = &n; //saving the n's address to nPtr

    printf("n: %d\n", n);
    printf("n's address(&n): %p\n", &n);

    printf("nPtr = %p\n");
    printf("*nPtr: %d\n", *nPtr);


    return 0;
}