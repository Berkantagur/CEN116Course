#include <stdio.h>

int main(void){

int a = 7;
int *aPtr = &a; // set aPtr to the address of a

printf("The address of a is %p"
"\nThe value of aPtr is %p", &a, aPtr);

printf("\n\nThe value of a is %d"
"\nThe value of *aPtr is %d", a, *aPtr);

printf("\n\nShowing that * and & are complements of "
"each other\n&*aPtr = %p"
"\n*&aPtr = %p\n", &*aPtr, *&aPtr);

}