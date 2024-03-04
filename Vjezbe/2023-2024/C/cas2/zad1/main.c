#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b;

    scanf("%lf%lf", &a, &b);

    double arit = (a + b) / 2;
    double geom = sqrt(a * b);

    printf("AS = %lf \nGS = %lf", arit, geom);

    return 0;
}
