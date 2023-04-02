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

void multiply(int n1, int n2)
{
    result = n1 * n2;
    printf("Result: %d", result);
}

void division(int n1, int n2)
{
    if(n1 >= n2)
    {
        float result = n1 / n2;
        printf("Result: %f", result);
    }
    else{
        float result = n2 / n1;
        printf("Result: %f", result);
    }
}

int main(){
    // calculationMenu is an array of function pointers
    void (*calculationMenu[])(int, int) = {addition, substraction, multiply, division};

    unsigned int choice, n1 = 25, n2 = 10;
  
    printf("Please choice the operation you want to perform:\n0 --> Addition\n1 --> Subtraction\n2 --> Multiply\n3 --> Division\n");
    scanf("%d", &choice);
  
    if (choice > 3) 
        return 0;
  
    (*calculationMenu[choice])(n1, n2);
  
    return 0;








}