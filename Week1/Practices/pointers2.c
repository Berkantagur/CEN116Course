#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 66;
    int *n = &number;

    //Printing the number on the screen
    printf("\nValue: %d\n", number);

    //Printing the nummber's address on the screen
    printf("Address: %p\n\n", n);


    char letter = 'x';
    char *l = &letter;

    //Printing the letter on the screen
    printf("Value: %c\n", letter);

    //Printing the letter's address on the screen
    printf("Address: %p", l);


    return 0;
}