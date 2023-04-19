#include <stdio.h>
#include <math.h>

typedef struct
{
    double real, imag;
} complex_t;

int scan_complex(complex_t *c);
void print_complex(complex_t c);
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

    printf("\n\n");
    print_complex(com1);
    printf(" - ");
    print_complex(com2);
    printf(" = ");
    print_complex(subtract_complex(com1, com2));

    return (0);
}

int scan_complex(complex_t *c)
{
    int status;
    scanf("%f%f", &c->real, &c->imag);
    status = 1;
    return (status);
}

void print_complex(complex_t c)
{
    double a, b;
    char sign;

    a = c.real;
    b = c.imag;

    printf("(");

    if (b < 0)
        sign = '-';
    else
        sign = '+';
    
    printf("%.2f %c %.2fi", a, sign, fabs(b));
    printf(")");
}

complex_t add_complex(complex_t c1, complex_t c2)
{
    complex_t csum;

    csum.real = c1.real + c2.real;
    csum.imag = c1.imag + c2.imag;
    
    return (csum);
}

complex_t subtract_complex(complex_t c1, complex_t c2)
{
    complex_t cdiff;
    cdiff.real = c1.real - c2.real;
    cdiff.imag = c1.imag - c2.imag;

    return (cdiff);
}