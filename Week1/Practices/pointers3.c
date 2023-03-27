#include <stdio.h>
#include <stdlib.h>

int main(){

    char letter = 'k';
    char *pt = &letter;

    printf("Address1: %p\n", pt); //000000817bfff887

    pt++;

    printf("Address2: %p\n", pt); //000000817bfff888

    pt--;

    printf("Address3: %p", pt); //000000817bfff887

    return 0;
}