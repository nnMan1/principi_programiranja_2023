#include <stdio.h>
#include <stdlib.h>

//napisati rekurzivnu funkciju koja nalazi zbir cifara
int iter_zbir_cif(int n) {
    int s = 0;

    while(n != 0) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

int rec_zbir_cif(int n) {
    if(n == 0)
        return 0;

    return rec_zbir_cif(n / 10) + n % 10;
}

int rec_fact(int n) {
    if(n == 0)
        return 1;

    int f = rec_fact(n - 1);
    return f * n;
}

int minDigit(int n) {

    if(n < 10)
        return n;

    int m = minDigit(n / 10);
    return m < n % 10 ? m : n % 10;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", minDigit(n));
    return 0;
}
