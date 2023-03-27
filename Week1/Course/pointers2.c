#include <stdio.h>

// Cube a variable using Pass-By-Value
/*
int cubeByValue(int n); // Function prototype

int main(void){

    int number = 6; //Initialize number

    printf("The original value of number is %d", number);

    // Pass number by value to cubeByValue
    number = cubeByValue(number);

    printf("\nThe new value of number is %d\n", number);

}

// Calculate and return cube of integer argument
int cubeByValue(int n){

    return n * n * n; // Cube local variable n and return result

}
*/



// Cube a variable using Pass-By-Reference with a pointer argument.

void cubeByReference(int *nPtr); // Function prototype

int main(void){

    int number = 6; // Initialize number

    printf("The original value of number is %d", number);

    // Pass address of number to cubeByReference
    cubeByReference(number);

    printf("\nThe new value of number is %d\n", number);

}

// Calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr){

    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr

}