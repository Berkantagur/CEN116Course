#include <stdio.h>

int toupper(char ch);
int tolower(char ch);
int isupper(char ch);
int islower(char ch);

int main(void){

    char ch;
    printf("Please enter a character:");
    ch = getchar();
    if(isupper(ch))
        printf("%c is an uppercase letter.\n");
        return 0;
}
