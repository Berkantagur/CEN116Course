#include <stdio.h>
// pbv --> pass by value
// pbr --> pass by reference 

void pbr(int *n);
int pbv(int n);

int main(void) {

    int number1 = 3;
    printf("Number1: %d\n", number1);
    pbr(&number1);
    printf("New Number1: %d\n", number1);

    int number2 = 3;
    printf("Number2: %d\n", number2);
    int result = pbv(number2);
    printf("New Number2: %d\n", result);

    pbv(number2);
    printf("IsNewNumber2: %d", number2);

    return 0;
}

void pbr(int *n) {

    *n = *n + *n;

}

int pbv(int n){

    return n = n * n;
}
