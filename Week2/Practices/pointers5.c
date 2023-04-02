//CALCULATOR
#include <stdio.h>
#include <stdlib.h>

int result;
void addition(int n1, int n2)
{
    result = n1 + n2;
    printf("Result: %d", result);
}

void substraction(int n1, int n2)
{
    if(n1 >= n2)
    {
        result = n1 - n2;
        printf("Result: %d", result);
    }
    else{
        result = n2 - n1;
        printf("Result: %d", result);
    }
}
