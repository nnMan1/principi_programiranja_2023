#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;
    scanf("%lf%lf", &x, &y);

    printf("AS(%lf, %lf) = %lf\n", x, y, (x+y)/2);
    printf("GS(%lf, %lf) = %lf\n", x, y, sqrt(x*y));

    return 0;
}
