#include <stdio.h>
#include <ctype.h>

int main(void){

    char character = 'c';
   
    if (islower(character))
        puts("Character is a small letter with a forensic variable");

    else 
        puts("Character is a big letter with a forensic variable");

}