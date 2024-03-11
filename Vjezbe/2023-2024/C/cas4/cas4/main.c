#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "my_lib.h"

void stampa_cifara_rec(unsigned int n) {

    if(n == 0)
        return;

    stampa_cifara_rec(n / 10);
    printf("%d", n % 10);
}

void stampa_cifara_obr_rec(unsigned int n) {

    if(n == 0)
        return;

    printf("%d", n % 10);
    stampa_cifara_obr_rec(n / 10);
}

int broj_parnih_cif_rec(int n) {
    if(n == 0)
        return 0;

    return broj_parnih_cif_rec(n / 10) + (n % 2 == 0);
}

int ukloni(int x, int c) {
    if(x == 0)
        return 0;

    if(x % 10 == c)
        return ukloni(x / 10, c);
    else
        return ukloni(x / 10, c) * 10 + x % 10;
}

int stepen(int b, int p) {
    if(p == 0)
    return 1;

    return p * stepen(b, p-1);
}

int obrni(int x, int p) {
    if(x == 0)
        return p;

    return obrni(x / 10, p * 10 + x % 10);
}

void test1() {
    static int x = 5;
    x = x + 1;

    printf("%d", x);
}

void test(int x) {

    register int a = 6;

    for(int i=0;i<5;i++) {
        int x = 2;
        int a = 7;

        if(i == x) {
            a = 2;
        }

        printf("%d", a);
    }

    printf("%d", a);
    return;
}

int main()
{
    printf("%d", obrni(45101, 0));
    return 0;
}


