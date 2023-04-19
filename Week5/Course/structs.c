// Operators to process complex numbers
#include <stdio.h>
#include <math.h>

// User-defined complex number type
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

    // Gets two complex numbers
    printf("Enter the real and imaginary parts of a complex number\n");
    printf("separated by a space> ");
    scan_complex(&com1);
    printf("Enter a second complex number> ");
    scan_complex(&com2);

    // Forms and display the sum
    printf("\n");
    print_complex(com1);
    printf(" + ");
    print_complex(com2);
    printf(" = ");
    print_complex(add_complex(com1, com2));

    //Forms and displays the difference
    printf("\n\n");
    print_complex(com1);
    printf(" - ");
    print_complex(com2);
    printf(" = ");
    print_complex(subtract_complex(com1, com2));

    return (0);
}

//Complex number input function
int scan_complex(complex_t *c)
//output-address of complex varible to fill
{
    int status;
    scanf("%f%f", &c->real, &c->imag);
    status = 1;
    return (status);
}

//Complex output function displays value as (a + bi) or (a - bi)
void print_complex(complex_t c)
//input-complex number to display
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

//Returns sum of complex values c1 and c2
complex_t add_complex(complex_t c1, complex_t c2)
//input - values to add
{
    complex_t csum;

    csum.real = c1.real + c2.real;
    csum.imag = c1.imag + c2.imag;
    
    return (csum);
}

//Returns difference c1 - c2
complex_t subtract_complex(complex_t c1, complex_t c2)
//input parameters
{
    complex_t cdiff;
    cdiff.real = c1.real - c2.real;
    cdiff.imag = c1.imag - c2.imag;

    return (cdiff);
}