#include <stdio.h>

int main(void){

    int n = 12;
    int *nPtr; //= NULL //variable

    nPtr = &n; //saving the n's address to nPtr

    printf("n: %d\n", n);
    printf("n's address(&n): %p\n", &n);

    printf("nPtr = %p\n", nPtr);
    printf("*nPtr: %d\n", *nPtr); //indirection operator (showing the data in the address)


    float f = 4.03;
    float *fPtr = &f;

    printf("*fPtr: %d", *fPtr);

    return 0;
}