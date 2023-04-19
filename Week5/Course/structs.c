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
