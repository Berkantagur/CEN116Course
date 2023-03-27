// POINTERS:
// A pointer is a variable whose value is the address of another variable
#include <stdio.h>
#include <stdlib.h>

int main(){

    //ampersand --> &
    int number1 = 10;
    int number2 = 20;
    double number3 = 10.25;
    char word = 'a';

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%f\n", number3);
    printf("%c", word);

    printf("\n\n Memory Address \n\n");
    
    printf("%p\n", &number1);
    printf("%p\n", &number2);
    printf("%p\n", &number3);
    printf("%p", &word);

    return 0;
}