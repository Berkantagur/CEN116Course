#include <stdio.h>
// pbv --> pass by value
// pbr --> pass by reference 

void pbr(int *n);
int pbv(int n);

int main(void) {

    int number = 9;
    printf("Number: %d\n", number);
    pbr(&number);
    printf("Number: %d\n", number);

    return 0;
}

void pbr(int *n){

    *n = *n + *n;

}