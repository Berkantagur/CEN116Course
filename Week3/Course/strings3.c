#include <stdio.h>
#include <ctype.h>

int main(void){

    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "According to islower:",
        islower('p')    ? "p is a " : "p is not a ", "lowercase letter",
        islower('P')    ? "P is a " : "P is not a ", "lowercase letter",
        islower('5')    ? "5 is a " : "5 is not a ", "lowercase letter",
        islower('!')    ? "! is a " : "! is not a ", "lowercase letter");

}