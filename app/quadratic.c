#include "quadratic.h"
#include <stdio.h>
#include <math.h>

int quadratic(double a, double b, double c, double *x1, double *x2) {
    if (a == 0) {
	*x1 = *x2 = NAN;
        return 0;
    }
    int d = b*b-4*a*c;
    if (d < 0) {
        *x1 = *x2 = NAN;
	return 0;
    }
    else if (d == 0) {
        *x1 = *x2 = -b/(2*a);
	return 1;
    }
    *x1 = (-b + sqrt(d)) / (2*a);
    *x2 = (-b - sqrt(d)) / (2*a);
    return 2;
}
