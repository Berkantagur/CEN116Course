// Using functions strcpy and strncpy
#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15

int main(void){

    char x[] = "Happy Birthday to You";
    char y[SIZE1];
    char z[SIZE2];

    printf("%s%s\n%s%s\n",
        "The string in array x is: ", x,
        "The string in array y is: ", strcpy(y, x));

    strncpy(z, x, SIZE2 - 1);

    z[SIZE2 -1] = '\0';
    printf("The string in array z is: %s\n", z);

}