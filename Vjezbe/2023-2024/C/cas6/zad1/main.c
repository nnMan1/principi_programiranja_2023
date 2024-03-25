/*
Ucitati duzinu niza
Ucitati elemente niza
Sortirati niz
Stampati minimum, makismum i medijanu
*/

#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    sort(a, n);

    printf("min(a) = %d\n", a[0]);
    printf("max(a) = %d\n", a[n-1]);
    printf("med(a) = %d\n", a[n / 2]);

    print(a, n);
    printf("\n");

    int k;
    scanf("%d", &k);

    for(int i=0;i<k;i++) {
        int q;
        scanf("%d", &q);

        printf("%d in a = %d\n", q, bin_search(a, n, q));
    }
    return 0;
}
