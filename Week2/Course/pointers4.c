#include <stdio.h>

int multiply(int *a, int *b);

int main(){

    int n1, n2, result;

    printf("Please enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    result = multiply(&n1, &n2);
    printf("Result: %d", result);

}

int multiply(int *a, int *b){

    return *a*(*(b));
}