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

}