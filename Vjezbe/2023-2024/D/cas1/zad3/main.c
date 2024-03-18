#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double alpha, x;
    scanf("%lf", &alpha);

    x = 180 / M_PI * alpha;

    printf("%lf rad = %lf deg", alpha, x);
    return 0;
}
