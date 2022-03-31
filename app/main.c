#include <stdio.h>

#include "quadratic.h"

int main()
{
    double x1, x2;
    printf("%d\n", quadratic(1, 2, 1, &x1, &x2));
    return 0;
}
