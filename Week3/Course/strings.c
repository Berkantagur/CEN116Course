#include <stdio.h>
#include <ctype.h>

int main(void){

    printf("%s\n%s%s\n%s%s\n\n", "According to is digit: ",
    isdigit('8')    ? "8 is a " : "8 is not a ", "digit",
    isdigit('#')  ? "# is a " : "# is not a ", "digit");


}