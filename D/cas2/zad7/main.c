#include <stdio.h>
#include <stdlib.h>

int zbir(int, int);

double pTrougla(double a, double b, double c) {
    double s = (a + b + c) / 2;
    double p = sqrt(s * (s - a) * (s - b) * (s - c));

    return p;
}

/*double zbir(int a, int b) {
}*/
/*
double zbir(double a, double b) {
}
*/

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    printf("%lf", pTrougla(a, b, c));

    return 0;
}

int zbir(int a, int b) {
    int z = a + b;
    return z;
}
