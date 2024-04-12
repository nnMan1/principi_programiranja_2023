#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(double l, double r, int n, double (*func)(double)){
    double d = (r - l) / (n - 1);

    for(int i=0;i<n;i++)
        printf("%lf ", func(l + i * d));
}

int main()
{
    double l ,r;
    int n;
    char f_name[10];

    scanf("%lf %lf %d %s", &l, &r, &n, f_name);

    char f_names[4][10] = {"sin", "cos", "tan", "atan"};
    double (*funcs[5])(double) = {sin, cos, tan, atan};

    for(int i=0;i<4;i++)
    if(strcmp(f_name, f_names[i]) == 0)
        f(l, r, n, funcs[i]);
    return 0;
}
