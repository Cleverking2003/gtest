#include "myfunc.h"
#include <stdio.h>
#include <math.h>

double quadratic(double a, double b, double c) {
    int d = b*b-4*a*c;
    if (d < 0) {
        return NAN;
    }
    int root = (-b + sqrt(d)) / (2*a);
    return root;
}
