#include <stdio.h>
#include <math.h>

typedef struct
{
    double real, imag;
} complex_t;

int scan_complex(complex_t *c);
void print_complex(complex_t);
complex_t add_complex(complex_t c1, complex_t c2);
complex_t subtract_complex(complex_t c1, complex_t c2);

int main(void){

    complex_t com1, com2;

    printf("Enter the real and imaginary parts of a complex number\n");
    printf("separated by a space> ");
    scan_complex(&com1);
    printf("Enter a second complex number> ");
    scan_complex(&com2);

    printf("\n");
    print_complex(com1);
    printf(" + ");
    print_complex(com2);
    printf(" = ");
    print_complex(add_complex(com1, com2));

}