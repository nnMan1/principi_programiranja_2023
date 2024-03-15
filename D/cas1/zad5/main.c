#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    double s = (a+b+c)/2;
    double p = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("P(%lf, %lf, %lf) = %lf", a, b, c, p);
    return 0;
}
