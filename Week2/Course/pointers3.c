// Using subscripting and pointer notations with arrays
#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3, 4}; //initialize array arr
    int *arrPtr = arr; // set arrPtr to point to array arr
    int i; // counter
    int offset; //counter

    // output array arr using array subscript notation
    printf("Arr printed with:\nArray subscript notation\n" );

    // loop through array arr
    for (i=0; i<4; i++){

        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // output array arr using array name and pointer/offset notation
    printf("\nPointer/offset notation where\nThe pointer is the array name\n");

    // loop through array arr
    for (offset=0; offset<4; offset++){

        printf("*(arr + %d ) = %d\n", offset, *(arr + offset));

    }

}