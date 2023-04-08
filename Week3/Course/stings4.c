#include <stdio.h>
#include <ctype.h>

int main(void){

    printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n", "According to isspace:",
        "Newline", isspace('\n')    ? " is a " : " is not a ",
        "whitespace character", "Horizontal tab",
        isspace('\t')   ? " is a " : " is not a ",
        "whitespace character",
        isspace('%')    ? "% is a " : "% is not a ",
        "whitespace character");

        
}