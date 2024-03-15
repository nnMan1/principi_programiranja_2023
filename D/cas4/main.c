#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"

int n;

void ispis1(int n) {
    if(n == 0)
        return 0;

    ispis1(n / 10);
    printf("%d", n % 10);
}

void ispis2(int n) {
    if(n == 0)
        return 0;

    printf("%d", n % 10);
    ispis2(n / 10);
}

int broj_parnih(int n) {
    if(n == 0)
        return 0;

    /*int tmp = broj_parnih(n / 10);
    if(n % 2 == 0)
        tmp = tmp + 1;
    return tmp;*/

    return broj_parnih(n / 10) + (n % 2 == 0);
}

int ukloni(int n, int c) {
    if(n == 0)
        return 0;

    int x = ukloni(n / 10, c);
    if(n % 10 != c)
        x = x * 10 + n % 10;

    return x;
}

void binarni_zapis(int n) {
    if(n == 0)
        return;

    binarni_zapis(n / 2);
    printf("%d", n % 2);
}

long long dodaj_0(int n) {
    if(n == 0)
        return 0;

    long long k = dodaj_0(n / 10);
    k = k * 10 + n % 10;

    if(n % 2 == 1)
        k *= 10;

    return k;
}

int NZD(int a, int b) {
    if(b == 0)
        return a;

    return NZD(b, a % b);
}

int obrni(int x, int p) {
    if(x == 0)
        return p;

    return obrni(x / 10, p * 10 + x % 10);
}

int fibonaci(int n) {
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fibonaci(n-1) + fibonaci(n - 2);
}

int func() {
    static int br = 0;
    br = br + 1;
    printf("%d ", br);
}

int main()
{
    printf("%d", n);
    //printf("%d", obrni(2456, 0));
    return 0;
}
